// Your code here...
#include<stdio.h>
int main(){
    int num,i,j;
    scanf("%d",&num);
    for(i=1;i<num;i+=1){
        for(j=n-i+1;j>0;j-=1){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}