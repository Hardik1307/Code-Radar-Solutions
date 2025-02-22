#include<stdio.h>
int main() {
    int num,i,j,k;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=1;j<=num-i;j++){
            printf(" ");
        }
        for(k=1;k<=(2*i-1);k++){
            printf("*");

        }
        for(j=1;j<=num-i;j++){
            printf(" ");
        }
        printf("\n");
    }
    for(i=num-1;i>0;i--){
        for(j=1;j<=num-1;j++){
            printf(" ");
        }
        for(k=i;k<=0;k++){
            printf("*");
        }
        for(j=1;j<=num-1;j++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}