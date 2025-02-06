#include <stdio.h>

int main() {
    char input[100]; // Array to hold the input string

    // Input a string from the user
    fgets(input, sizeof(input), stdin);

    // Output the string
    printf("%s", input);

    return 0;
}
