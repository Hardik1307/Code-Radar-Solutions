// Your code here...
#include<math.h>
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int r=1;
    for (int i=1;i<=b;i++){
        if (a&b){
            printf("%d",a);
            break;
        }
        
        r*=2;

    }
    
    a=a^(r);
    
    return 0;
    
}