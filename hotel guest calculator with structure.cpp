#include<stdio.h>
#include<string.h>



struct hotel
{
int	hotelID;
char hotelNAME[100];
char hotelTYPES[56];
int	rentperday;
};

int main(){
	struct hotel guest1;
	printf("Enter your id:");
	scanf("%d",&guest1.hotelID);
	printf("Enter your name:");
	scanf("%s",&guest1.hotelNAME);
	printf("Enter your type:");
	scanf("%s",&guest1.hotelTYPES);
	printf("Your details are\n");
	printf("%d\n",guest1.hotelID);
	printf("%s\n",guest1.hotelNAME);
printf("%s\n",guest1.hotelTYPES);
if(strcmp(guest1.hotelTYPES,"standard")==0){
int days;
	guest1.rentperday=2000;
	printf("How many days will the user stay:");
scanf("%d",&days);
printf("Your rent for %d days is %d",days,days*guest1.rentperday);
}
else if(strcmp(guest1.hotelTYPES,"luxury")==0){
int days;
	guest1.rentperday=20000;
	printf("How many days will the user stay:");
scanf("%d",&days);
printf("Your rent for %d days is %d",days,days*guest1.rentperday);
}
else
{
    printf("Enter valid room type");
}


}