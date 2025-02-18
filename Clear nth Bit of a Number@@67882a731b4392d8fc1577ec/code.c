// Your code here...
#include<math.h>
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    r=1;
    for (int i=1;i<=b,i++){
        r*=2;
    }
    
    a=a&~r;
    printf("%d",a);

    
}