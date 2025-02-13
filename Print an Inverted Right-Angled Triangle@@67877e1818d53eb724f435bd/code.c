// Your code here...
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for(i=1,i<=num,i+=1){
        for(j=0,j<i,j+=1){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}