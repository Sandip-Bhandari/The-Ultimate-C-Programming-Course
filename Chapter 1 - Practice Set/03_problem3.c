// #include <stdio.h>

// int main(){
//     float c = 37.0, f;

//     f = ((9.0/5.0)*c) + 32;
//     printf("The value in Fahrenheit is %f", f);

//     return 0;
// }

#include <stdio.h>

int main(){
     float c,f;
     printf("Enter the value ");
     scanf("%f", &c);

     printf("the farenhite value is, %f", (9/5)*c +32);
     return 0;
}