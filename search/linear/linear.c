#include <stdio.h>

int linear_search(int *arr, int len, int v) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == v) return i;
    }
    return -1;
}

int main() {
    int arr[5] = { 4, 2, 3, 5, 6 };

    printf("%d\n", linear_search(arr, 5, 2)); // 1
    printf("%d\n", linear_search(arr, 5, 0)); // -1
}
