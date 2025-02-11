#include <stdio.h>
#include <math.h>

int main() {
    int num1,num2;
    scanff("%s %s",&num1,&num2);
    
    if (num1>num2){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
    return 0;
}