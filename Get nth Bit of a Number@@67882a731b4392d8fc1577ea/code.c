#include <stdio.h>
int main(){
    int num ,pos ;
    scanf("%d %d",&num,&pos);
    num=num>>(pos-1);
    printf("%d",num%2);
}