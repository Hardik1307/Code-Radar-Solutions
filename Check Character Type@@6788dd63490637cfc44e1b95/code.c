// Your code here...
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(isalpha(ch)){
        if(ch == 'A' || ch == 'E' || ch == 'I' ch == 'O' || ch == 'U' ||
         ch == 'a' || ch == 'e' || ch == 'i' ch == 'o' || ch == 'u'){
            printf("Vowel");
         }
         else{
            printf("Conspnant");
         }
    }else if(isdigit(ch)){
        printf("Digit");
    }else{
        printf("Special Character");
    }
    return 0;
}