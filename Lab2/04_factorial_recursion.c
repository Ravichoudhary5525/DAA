#include <stdio.h>

unsigned long long factorial(unsigned int n) {
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main(void) {
    unsigned int n;

    printf("Enter a non-negative integer: ");
    scanf("%u", &n);

    printf("Factorial = %llu\n", factorial(n));

    return 0;
}
