#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%d ", col);
        }
        for (int col = row - 1; col >= 1; col--) {
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0;
}

// 1 
// 1 2 1
// 1 2 3 2 1
// 1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
