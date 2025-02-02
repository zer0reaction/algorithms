#include <stdio.h>

int binary_search(int *haystack, int n, int needle) {
    int l = 0;
    int h = n;
    int m;

    while (l < h) {
        m = l + (h - l) / 2;

        if (haystack[m] == needle) return m;
        else if (haystack[m] > needle) h = m;
        else l = m + 1;
    }

    return -1;
}

int main() {
    int arr[5] = { 1, 3, 4, 5, 5 };
    printf("%d\n", binary_search(arr, 5, 3)); // 1
    printf("%d\n", binary_search(arr, 5, 5)); // 3 or 4
    printf("%d\n", binary_search(arr, 5, 2)); // -1
    return 0;
}
