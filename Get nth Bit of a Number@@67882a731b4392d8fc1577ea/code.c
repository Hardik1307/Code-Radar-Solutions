#include <stdio.h>
int main(){
    int num ,pos ;
    scanf("%d %d",&num,&pos);
    num=num>>(pos);
    printf("%d",num&1);
}