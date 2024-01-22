#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines : ");
    scanf("%d",&n);
    // Question: Print the given pattern
    // A B C D E F G
    // A B C   E F G
    // A B       F G
    // A           G
    // FOR n = 4
    int m = n - 1;
    int nst = m;
    int nsp = 1;
    int b = 1;
    for(int i=1; i<=2*n-1; i++){
        char ch = (char)(b+64);
        printf("%c ",ch);
        b++;
    }
    printf("\n");
    for(int i=1; i<=m; i++){
        int a = 1;
        for(int j=1; j<=nst; j++){
            char ch = (char)(a+64);
            printf("%c ",ch);
            a++;
        }
        for(int k=1; k<=nsp; k++){
            printf("  ");
            a++;
        }
        for(int l=1; l<=nst; l++){
            char ch = (char)(a+64);
            printf("%c ",ch);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }

    return 0;
}