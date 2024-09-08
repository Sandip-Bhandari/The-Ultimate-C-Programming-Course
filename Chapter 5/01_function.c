#include <stdio.h>

// Function prototype
int sum(int, int);


// Function definition
int sum(int x, int y){
    // printf("The sum is %d\n", x+y);
    return x+y;
}

int main(){
    int a = 1;
    int b = 2;

    // int c = a + b;
    // printf("The sum is %d\n", c);
    int c  = sum(a,b); // Function call
    printf("%d\n", c);

    int a1 = 12;
    int b1 = 23;

    // int c1 = a1 + b1;
    // printf("The sum is %d\n", c1);
    int c1 = sum(a1,b1); // Function call
    printf("%d\n", c1);

    int a2 = 2;
    int b2 = 27;

    // int c2 = a2 + b2;
    // printf("The sum is %d\n", c2);
    int c3 = sum(a2, b2); // Function call
    printf("%d\n", c3);

    return 0;
}


//! Online C compiler to run C program online
// #include <stdio.h>
// int sum( int, int);
//     int sum(int a,int b){
//         printf("The sum of %d and %d is %d \n",a , b, (a+b));
//     }
// int product(int, int);
//     int product(int a, int b){
//         printf("The product of %d and %d is %d \n", a, b, (a*b));
//     }
// float Substraction(int, int);
//     float Substraction(int a, int b){
//         printf("The Substraction of %d and %d is %d \n", a, b, (a-b));
//     }
// int division(int, int);
//     int division(int a, int b){
//         printf("The division of %d and %d is %d \n", a, b, (a/b));
//     }
// int main() {
//     int x, y;
//     printf("Enter value of X: ");
//     scanf("%d",&x);
//     printf("Enter value of Y: ");
//     scanf("%d",&y);
    
//     sum(x,y);
//     product(x,y);
//     Substraction(x,y);
//     division(x,y);
    
    
//     return 0;
// }