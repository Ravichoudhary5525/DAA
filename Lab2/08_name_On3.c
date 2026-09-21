#include <stdio.h>

int main(void) {
    int i, j, k, n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            for (k = 1; k <= n; k++)
                printf("Ravi\n");
        }
    }

    return 0;
}
