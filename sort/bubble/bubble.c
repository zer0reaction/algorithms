#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int *arr, int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int _ = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = _;
            }
        }
    }
}

int main() {
    srand(time(NULL));

    int arr[5];

    for (int i = 0; i < 5; i++) {
        arr[i] = rand() % 100;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubble_sort(arr, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
