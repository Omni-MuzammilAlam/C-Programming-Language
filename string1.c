# include<stdio.h>
int main(){

// char name[]={'M','U','Z','A','M','M','I','L'};
// Arrey bhaijaan, dekho yeh error aaya hai kyunki humne apne string ko properly khatam nahi kiya hai. Jaise ki tum jaante ho, C mein strings ko end karne ke liye hum null character ('\0') use karte hain. Lekin humne apne name array mein yeh null character bhool gaye!

char name[]={'M','U','Z','A','M','M','I','L','\0'};

printf("%s", name);
return 0;
}