#include <stdio.h>
#include <string.h>

void Func(char *input) {
    char buffer[10]; // Buffer with a size of 10 bytes
    strcpy(buffer, input); // Copy input into buffer without checking its length
    printf("Buffer content: %s\n", buffer);
}

int main() {
    char input[11] = "1234567890"; // Input of size 11 including null terminator
    Func(input); // Call the vulnerable function with input
    return 0;
}
