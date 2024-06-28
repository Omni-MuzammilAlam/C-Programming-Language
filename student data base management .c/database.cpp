#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50

struct Student {
    char name[MAX_NAME_LENGTH];
    int age;
    float gpa;
};

void addStudent(struct Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("Database is full. Cannot add more students.\n");
        return;
    }

    struct Student newStudent;

    printf("Enter name of the student: ");
    fgets(newStudent.name, MAX_NAME_LENGTH, stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0'; 

    printf("Enter age of the student: ");
    scanf("%d", &newStudent.age);

    printf("Enter GPA of the student: ");
    scanf("%f", &newStudent.gpa);

    getchar();

    students[*count] = newStudent;
    (*count)++;

    FILE *fp = fopen("students.txt", "a");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    fprintf(fp, "%s %d %.2f\n", newStudent.name, newStudent.age, newStudent.gpa);

  
    fclose(fp);

    printf("Student added successfully.\n");
}

void editStudent(struct Student students[], int count) {
    if (count == 0) {
        printf("Database is empty. No students to edit.\n");
        return;
    }

    char searchName[MAX_NAME_LENGTH];
    printf("Enter the name of the student you want to edit: ");
    fgets(searchName, MAX_NAME_LENGTH, stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < count; ++i) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Student found.\n");
            printf("Enter new age of the student: ");
            scanf("%d", &students[i].age);

            printf("Enter new GPA of the student: ");
            scanf("%f", &students[i].gpa);

            getchar();

            FILE *fp = fopen("students.txt", "w");
            if (fp == NULL) {
                printf("Error opening file.\n");
                return;
            }

       
            for (int j = 0; j < count; ++j) {
                fprintf(fp, "%s %d %.2f\n", students[j].name, students[j].age, students[j].gpa);
            }

            fclose(fp);

            printf("Student information updated.\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found in the database.\n");
    }
}

void displayStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("Database is empty. No students to display.\n");
        return;
    }

    printf("List of students:\n");
    for (int i = 0; i < count; ++i) {
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("GPA: %.2f\n", students[i].gpa);
        printf("----------------\n");
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;
    FILE *fp = fopen("students.txt", "r");
    if (fp != NULL) {
        while (fscanf(fp, "%49s %d %f\n", students[count].name, &students[count].age, &students[count].gpa) == 3) {
            count++;
            if (count >= MAX_STUDENTS) break; 
        }
        fclose(fp);
    }

    do {
        printf("\nStudent Database Menu:\n");
        printf("1. Add a new student\n");
        printf("2. Edit student information\n");
        printf("3. Display all students\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                editStudent(students, count);
                break;
            case 3:
                displayStudents(students, count);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    } while (choice != 4);

    return 0;
}