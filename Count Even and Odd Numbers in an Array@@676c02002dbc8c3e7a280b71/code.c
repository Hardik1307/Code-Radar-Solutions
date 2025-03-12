// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int countEven=0;
    int countOdd =0;
    for(int i=0;i<n;i++){
        if(num[i]%2==0){
            countEven +=1;
        }
        else{
            countOdd +=1;
        }
    }
    printf("%d",countEven);
    printf(" ");
    printf("%d",countOdd);
    return 0;
    

}