// Your code here...
#include<math.h>
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int r=1;
    do{
        if (a&r){
            printf("%d",a);
            
        }
        
        r*=2;

    }
    while(!(a&r));
    
    
    
    return 0;
    
}