// Your code here...
#include<stdio.h>
int main(){
    int num,i,j,k;
    scanf("%d",&num);
    for(i=1;i<=num;i+=1){
        for(j=i;j<num;j+=1){
            printf(" ");
        }
        for(k=1;k<=(2*i-1);k+=1){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}