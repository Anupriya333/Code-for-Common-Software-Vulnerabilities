#include <stdio.h>
int main() {
    unsigned short int a = 65535; // Maximum value for an unsigned 16-bit integer
    printf("Initial value of 'a': %hu\n", a);
    // Attempt to increase 'a' beyond its maximum value
    a = a + 1; // Integer overflow occurs here
    printf("Value of 'a' after overflow: %hu\n", a);
    return 0;
}
