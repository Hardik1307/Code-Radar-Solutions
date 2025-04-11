#include<stdio.h>
#include<math.h>
int isPrime(int n);

int isPrime(int n){
     if (n <= 1) {
        return 0;}
    if (n == 2) {
        return 1;}
    if (n % 2 == 0) {
        return 0;}
    
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return 0;
        }
   }
     return 1;

}
int main() {
    int t;
    scanf("%d", &t);

    int numbers[t];
    for (int i = 0; i < t; i++) {
        scanf("%d", &numbers[i]); 
    }
    
    for (int i = 0; i < t; i++) {
        printf("%d\n", isPrime(numbers[i])); 
    }
      
    return 0;
}