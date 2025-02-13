// Your code here...
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("Leap Year");
    }else{
        printf("Not a Leap Year");
    }
    return 0;
}