#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    for(int row = 1; row<=n; row++){
        for(int space = 1; space<=row; space++){
            printf(" ");
        }
        for(int col = 0; col<=n-row; col++){
            printf("%c",'A'+col);
        }
        printf("\n");
    }
    return 0;
}
// A B C D E
//   A B C D
//     A B C
//       A B
//         A

