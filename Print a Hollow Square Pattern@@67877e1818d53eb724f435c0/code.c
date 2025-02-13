// Your code here...
#include<stdio.h>
int main(){
    int num,i,j,k;
    scanf("%d",&num);
    for(i=1;i<=num;i+=1){
        printf("*")
    }
    for(j=0;j<(num-2);j+=1){
        printf("*");
        for(k=0;k<(num-2);k+=1){
            printf(" ");
        }printf("*");

        
    }

    for(i=1,i<=num,i+=1){
        printf("*")
    }
}