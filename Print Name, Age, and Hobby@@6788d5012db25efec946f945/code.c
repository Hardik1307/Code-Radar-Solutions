#include <stdio.h>

int main() {
    int age;
    char name[300],ho[30];
    scanf("%s %d %s",&name,&age,&ho);
    printf("Name: %s\nAge: %d\nHobby: %s",name,age,ho);
    return 0;
}