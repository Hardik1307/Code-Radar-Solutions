#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
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

int main() {
    int n;
    scanf("%d", &n); // Read number of test cases
    
    int numbers[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]); // Read each number
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d\n", isPrime(numbers[i]) ? 1 : 0); // Output 1 or 0
    }
    
    return 0;
}