// Your code here...
#include<stdio.h>
int main(){
    int num,i,j;
    scanf("%d",&num);
    for(i=num;i>0;i-=1){
        for(j=i;j>0;j-=1){
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}