#include<stdio.h>
int main() {
    int num,i,j,k;
    scanf("%d",&num);
    for(i=1;i<=(2*num-1);i++){
        for(j=1;j<=num-i;j++){
            printf(" ");
        }
        for(k=1;k<=(2*num-1);k++){
            printf("*");

        }
        for(j=1;j<=num-i;j++){
            printf("");
        }
        printf("\n");
    }
    return 0;
}