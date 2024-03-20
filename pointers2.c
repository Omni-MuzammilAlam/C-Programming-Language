#include<stdio.h>
/*Will the address output
 will be the same?
*/
void printAddress(int n){
printf("%u\n",&n);

}
void _printAddress(int*n){//this *n makes the function wants an address


printf("%u\n",n);// this is only n and not an &n because once &n is passes throught it this will become &&n


}
int main (){
int n=4;
printf("%u\n",&n);
printAddress(n);/*we cannot send address here because in order to do that we have 
to use pointer and sicne we have'nt used that here so the compiler will give error*/
printf("here we go\n");
printf("%u\n",&n);
_printAddress(&n);/* Agar aap _printAddress(n) likhte hain, toh aap actual value pass kar rahe honge, na ki uski address. Kyunki aapka parameter int* n ek pointer hai, ismein address chahiye hota hai. Isliye, agar aap _printAddress(n) likhte hain, toh yeh galat hoga.

Sahi tarika yeh hai ki aap _printAddress(&n) likhein, jisse aap
 actual variable n ka address pass kar rahe honge.
 Phir _printAddress function ke andar, parameter int* n 
uss address ko receive karega aur aap uss address ke through original variable n ki value ko dekh sakte hain.*/


printf("%u",&n);




/*since this mehtod is call by value method
in this a copy of the variable is made and
the actual value of the variable is not changed
therefore the new variable or the copy wil 
have adifferent address*/

}

/*Answer in call by value approach the values will
not remain the same as the new copy of the vairable n will be created
which will posess a different address to that of n
where in call by reference approach the address remains same*/
