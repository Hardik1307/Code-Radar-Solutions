// Your code here...// Your code here...
#include<stdio.h>
int main(){
    int n,i,j,k,l;
    int o;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<n-i;j++){
            printf(" ");
        }
        int m=1;
        for(k=1;k<=i;k++){
            printf("%d",m);
            m++;
            m=o;
        }
        
        for(l=1;l<i;l++){
            printf("%d",--o);
        }
    printf("\n");
    }
    return 0;
}