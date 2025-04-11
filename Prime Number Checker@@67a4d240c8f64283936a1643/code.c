#include<stdio.h>
#include<math.h>
int isPrime(int n);

int isPrime(int n){
     if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
    

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