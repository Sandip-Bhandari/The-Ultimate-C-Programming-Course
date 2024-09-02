#include <stdio.h>

int main(){
    int a=1; int b=1;
    printf("The value of a and b is %d\n", a&&b); // AND operator
    printf("The value of a or b is %d\n", a||b); // OR operator
    printf("The value of not(a) is %d\n", !a); // NOT operator

    if(a && b){
        printf("both are true\n");
    }
    // is same as writing ....
    if(a){
        if(b){
            printf("both are true");
        }
    }
    return 0;
}