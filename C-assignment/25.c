#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%c ",'A'+ col-1 );
        }
        for (int col = row - 1; col >= 1; col--) {
            printf("%c ", 'A' + col -1);
        }
        printf("\n");
    }


    return 0;
}
// A
// A B A
// A B C B A
// A B C D C B A
// A B C D E D C B A