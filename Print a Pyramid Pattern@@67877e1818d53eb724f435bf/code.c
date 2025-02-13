// Your code here...
#include<stdio.h>
int main(){
    int num,i,j;
    scanf("%d",&num);
    for(i=0;i<num;i+=1){
        for(j=0;j<(2i);j+=1){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}