#include <stdio.h>

int main(void) {
    int a[5] = {10, 20, 30, 40, 50};
    int key, low = 0, high = 4, mid;
    int found = 0;

    printf("Enter element to search: ");
    scanf("%d", &key);

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            found = 1;
            break;
        } else if (key < a[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (found)
        printf("Element Found\n");
    else
        printf("Element Not Found\n");

    return 0;
}
