#include <stdio.h>
#include <time.h>

int main(void) {
    clock_t start, end;
    double time;
    int i;
    long long sum = 0;

    start = clock();

    for (i = 1; i <= 1000000; i++)
        sum = sum + i;

    end = clock();

    time = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Sum = %lld", sum);
    printf("\nCPU Time = %f seconds\n", time);

    return 0;
}
