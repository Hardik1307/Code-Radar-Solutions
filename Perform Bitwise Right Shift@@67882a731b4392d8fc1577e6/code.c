// Your code here...
#include <stdio.h>
#include <math.h>

int main() {
    int num,posn;
    scanf("%d %d",&num,&posn);
    printf("%d",num>>posn);
    
    return 0;
}