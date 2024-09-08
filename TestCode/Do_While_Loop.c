// #include <stdio.h>

// int main(){
//    int n = 1;
//    do{
//     printf("%d \n", n);
//     n++;
//    } while ( n <= 10); 
//    return 0;
// }

// Online C compiler to run C program online
#include <stdio.h>
// #include <math.h>
int sum(int , int);
   
   int sum(int a, int b){
       printf("The sum of two numbers are: ", (a+b));
   }
    
int main() {
   int x, y;
   printf("Enter the value of X: ");
   scanf("%d", &x);
   
   printf("Enter the value of Y: ");
   scanf("%d", &y);
   
   sum(x,y);
    return 0;
}