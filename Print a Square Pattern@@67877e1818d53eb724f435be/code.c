// Your code here...
#include<stdio.h>
int main(){
    int num,i,j;
    scanf("%d",&num);

    for(i=1;i<=num;i+=1){
        for(j=1;j<=num;j+=1){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}