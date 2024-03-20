#include <stdio.h>

int main()
{

    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n", *pptr);
    // printf("%d\n", &i);
    /* this will jump to 2 places first the value at ptr and then the value at address of ptr
     */

    /*dekho dereference me *ka mtlb hota he value at address pf ptr right
     to isi trah se *pptr ka mtlb hoga
    value at address of pptr or hum is
     step ko double jump kr rhe hen
     **pptr lga kr jis se ye hogya
    value at address of addrerss of
     pptr*/
}