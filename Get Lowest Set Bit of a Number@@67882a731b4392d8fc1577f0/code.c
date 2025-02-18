// Your code here...
#include<math.h>
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    
    for (int i=1;i<=a;i++){
        printf("%d",i);
        if ((a>>1)&1){
            printf("%d",i);
            break;
        }
        
        

    }
    

    
    return 0;
    
}