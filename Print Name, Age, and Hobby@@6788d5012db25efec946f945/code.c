#include <stdio.h>

int main() {
   char str1[20],str2[30];
   int num;
   scanf("%s %d %s",&str1,&num,&str2);
   printf("Name: %s\n",str1);
   printf("Age: %d\n",num);
   printf("Hobby: %s",str2);
   return 0;
}