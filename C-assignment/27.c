#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int row = n; row >= 1; row--) {
        for (int space = 1; space <= n - row; space++) {
            printf(" ");
        }
        for (int star = 1; star <= 2 * row - 1; star++) {
            printf("%d", star);
        }
        printf("\n");
    }
    return 0;
}


// 1 2 3 4 5 6 7 8 9
//   1 2 3 4 5 6 7
//     1 2 3 4 5
//       1 2 3
//         1