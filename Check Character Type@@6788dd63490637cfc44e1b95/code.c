// Your code here...
#include <stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if(isalpha(ch)){
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i'|| ch == 'o' || ch == 'u'){
            printf("Vowel\n");
         }
         else{
            printf("Consonant\n");
         }
    }else if(isdigit(ch)){
        printf("Digit\n");
    }else{
        printf("Special Character");
    }
    return 0;
}