
#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num1>=18 && num2==0){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}// Your code here...