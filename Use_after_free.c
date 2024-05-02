#include <stdlib.h>
#include <stdio.h>

int main() {
    // Allocate memory on the heap
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    // Use the allocated memory
    *ptr = 10;
    printf("Value stored in allocated memory: %d\n", *ptr);
    // Free the allocated memory
    free(ptr);
     // Try to access the freed memory
    printf("Value stored in freed memory: %d\n", *ptr); // Use-after-free vulnerability
     return 0;
}
