#include<stdio.h>
#include<math.h>
int isprime(int n);
isprime(int n){
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
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}