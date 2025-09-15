#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int row = n; row >= 1; row--) {
        for (int space = 1; space <= n - row; space++) {
            printf(" ");
        }
        for (int star = 1; star <= 2 * row - 1; star++) {
            printf("%c", 'A' + star - 1);
        }
        printf("\n");
    }
    return 0;
}


// A B C D E F G H I
//   A B C D E F G
//     A B C D E
//       A B C
//         A