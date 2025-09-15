#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int num = 1;       
    
    for(int row = 1; row <= n; row++) {        
        for(int col = 1; col <= row; col++) {   
            printf("%c ",'A'+num-1 );
            num++;     
        }
        printf("\n");   
    }

    return 0;
}