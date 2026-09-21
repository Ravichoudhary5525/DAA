#include <stdio.h>
#include <time.h>

int main(void) {
    clock_t start, end;
    double time;

    start = clock();

    printf("Hello Ravi");

    end = clock();

    time = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\nCPU Time = %f seconds\n", time);

    return 0;
}
