#include<stdio.h>

int main (){
/*Jab * ka istemaal hota hai pointers
 ke context mein, toh iska matlub
 hota hai "address ka jo value hai.
" Pointer khud kisi variable ka
 address rakhta hai, aur jab aap
 *ptr likhte hain, toh yeh matlub
 hai ke wo value us address par
 kya hai, jo ke indirectly kisi 
designated variable jaise x ko 
refer kar sakta hai.


*/
int x;
int *ptr;

ptr = &x;
*ptr =0;
printf("x=%d\n",x); // should print 0
printf("*ptr =%d\n", *ptr);
printf("add of x is: %u\n", &x);
printf("add of ptr :%u \n", &ptr);
printf("ptr=%u\n",ptr);


*ptr+=5;/// this means *ptr=*ptr+5
printf("x=%d\n",x);// should print 5
printf("*ptr =%d\n", *ptr); //should print 5

(*ptr)++;// this means *ptr=*ptr+1
printf("x=%d\n",x); 
printf("*ptr =%d\n", *ptr);
/*(*ptr)++; ka matlab hai ke aap woh value badha rahe hain jo ptr point kar raha hai. Jaise agar *ptr ki value 5 hai, toh (*ptr)++; karne se woh 6 ho jayegi.

Ab *ptr++; likhne par, yeh nahi keh raha
\ ke value badhao. Balki, yeh keh
 raha hai ke pointer ko agle memory
 location pe le jao. Toh agar pehle
 ptr 1000 pe tha, toh *ptr++; 
likhne ke baad woh 1001 pe chala 
jayega.*/


}


