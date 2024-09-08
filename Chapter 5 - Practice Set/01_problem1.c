// #include <stdio.h>

// float average(int a, int b, int c);

// float average(int a, int b, int c){
//     return (a+b+c)/3.0;
// }


// int main(){
//     int a = 3, b=6, c=5;
//     printf("The average of a, b and c is %f", average(a, b, c));
//     return 0;
// }


#include<stdio.h>
#include<math.h>
// float average( int a, int b, int c);
    
    float average( int a, int b, int c){
        return (a+b+c)/3.0;
    }
    
int main() {
    int x,y,z;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    
    printf("Enter the value of y: ");
    scanf("%d", &y);
   
    printf("Enter the value of z: ");
    scanf("%d", &z);
    printf("The average of three numbers are %f", average(x,y,z));

    return 0;
}
