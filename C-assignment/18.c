#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  
    
    for(int row = 1; row <= n; row++) {          
        for(int col = n; col >=row; col--) {  
            printf("%c",'A'+n-col);
        }
        printf("\n");   
    }

    return 0;
}