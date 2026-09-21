#include <stdio.h>

int main(void) {
    int i, n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        printf("%d ", i);

    return 0;
}
