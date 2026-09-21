#include <stdio.h>

int main(void) {
    int i = 1, n;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n >= 1) {
        do {
            printf("%d ", i);
            i++;
        } while (i <= n);
    }

    return 0;
}
