//  #include <stdio.h>
 
//  int main(){
//     float p = 34.1;
//     int r = 8;
//     int t = 5;
//     printf("The value of simple interest is %f ", (p*r*t)/100);
//     return 0;
//  }

#include <stdio.h>

int main(){
   //  float p = 100.0;
   //  float r = 7.6;
   //  int t = 3;

   float p, r;
   int t;
   printf("Enter the principal amount: ");
   scanf("%f", &p);

   printf("Enter the rate of  intrest: ");
   scanf("%f", &r);

   printf("Enter the duration: ");
   scanf("%d", &t);

    printf("The value of simple interest is: %f", (p*r*t)/100);
    return 0;
}