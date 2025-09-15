#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    for(int row=1; row<=n ; row++){
        for(int space = 1; space<row; space++){
            printf(" ");
        }
        for(int col = n; col>=row; col--){
            printf("%d",n-col+1);
        }
        printf("\n");
    }
    return 0;
}

// 1 2 3 4 5
//   1 2 3 4
//     1 2 3
//       1 2
//         1