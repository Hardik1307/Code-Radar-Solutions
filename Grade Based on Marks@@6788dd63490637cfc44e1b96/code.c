#include<stdio.h>
int main() {
    int marks;
    scanf("%d", &marks);

    if (marks<60){
        printf("F \n");
    }
    else if(marks>=60 && marks<70){
        printf("D \n");
    }
    else if(marks>=70 && marks<80){
        printf("C \n");
    }

    else if(marks>80 && marks<90){
        printf("B \n");
    }
    else {
        printf("A \n");
    }
    
    return 0;
}