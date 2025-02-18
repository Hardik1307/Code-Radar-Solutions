// Your code here...
#include<math.h>
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int r=1;
    while(true){
        if (a&r){
            printf("%d",a);
            break;
        }
        
        r*=2;

    }
    
    
    
    return 0;
    
}