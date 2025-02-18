// Your code here...
#include<math.h>
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a);
    int r=1;
    while(true){
        if (a&r){
            printf("%d",a);
            break;
        }
        
        r*=2;

    }
    
    a=a^(r);
    
    return 0;
    
}