// Your code here...
#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        char ch='A';
        for(j=1;j<=n-i;j++){
            printf("%c ",ch);
            ch++;
        }
    printf("\n");
    }
    return 0;
}