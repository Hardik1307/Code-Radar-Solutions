// Your code here...
#include<stdio.h>
int main(){
    int n;
    scand("%d",&n);
    if(n<=1||n%2==0){
        printf("Not Prime");
    }
    else if(n==2){
        printf("Prime");
    }
    else{
        for(int i=3;i*i<n;i +=2 ){
            if(n%i==0){
                printf("Prime");
            }
            else{
                printf("Not Prime")
            }
        }

    }
    return 0;
    
}