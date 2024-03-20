#include<stdio.h>
#include<string.h>
struct student 
{
    int roll;
    float cgpa;
    char name[100];
};
int main (){
struct student s1;
s1.roll =67520;
s1.cgpa=4.0;
strcpy(s1.name,"muzammil");// we have used strcpy because this is a char array and char array cannot be overrided but chaqr pointer can be
printf("Student name is = %s\n",s1.name);
printf("Student roll no is = %d\n",s1.roll);
printf("Student cgpa is = %f\n",s1.cgpa);

struct student s2;
s2.roll =67519;
s2.cgpa=3.7;
strcpy(s2.name,"suman");
printf("Student name is = %s\n",s2.name);
printf("Student roll no is = %d\n",s2.roll);
printf("Student cgpa is = %f\n",s2.cgpa);

struct student s3;
s1.roll =67508;
s1.cgpa=3.5;
strcpy(s1.name,"Affan");
printf("Student name is = %s\n",s1.name);
printf("Student roll no is = %d\n",s1.roll);
printf("Student cgpa is = %f",s1.cgpa);



return 0;
}