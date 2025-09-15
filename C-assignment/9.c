 #include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    for(int row = 1; row<=n; row++){
        for(int col = 1; col<=row; col++){
            printf("%c", 'A' + col - 1);
        }
        printf("\n");
    }
    return 0;
}