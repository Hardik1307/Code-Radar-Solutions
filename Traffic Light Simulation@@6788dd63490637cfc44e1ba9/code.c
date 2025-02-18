// Your code here...
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    switch (ch){
        case 'R' : printf("Stop");
                break;
        case 'Y' : printf("Slow Down");
                break;
        case 'G' : printf("Go");
                break;
        default : printf("Invalid input");
    }
    return 0;
}