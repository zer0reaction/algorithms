#include <stdio.h>

int crystal_balls(int *a, int *b, int len) {
    int l = 0;
    int r = len - 1;

    while (l < r) {
        int m = l + (r - l) / 2;
        int r1 = a[m] && b[m];
        int r2 = a[m + 1] && b[m + 1];

        if (!r1 && r2) {
            return m + 1;
        } else if (!r1 && !r2) {
            l = m + 1;
        } else {
            r = m;
        }
    }

    if (a[0] == 1 && b[0] == 1) {
        return 0;
    }

    return -1;
}

int main() {
    int a[] = { 0, 0, 0, 0, 0 };
    int b[] = { 0, 0, 0, 0, 0 };

    printf("%d\n", crystal_balls(a, b, 5));

    return 0;
}
