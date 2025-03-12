#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int go[n];
    for (int i = 0; i < n; i++) {
        go[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        if (go[i] == 1) {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                go[j] = 1;
                count++;
            }
        }

        printf("%d %d\n", arr[i], count);
    }

    return 0;
}