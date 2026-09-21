#include <stdio.h>

int main(void) {
    int n, i, count = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Not Prime\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }

    if (count == 2)
        printf("Prime Number\n");
    else
        printf("Not Prime\n");

    return 0;
}
