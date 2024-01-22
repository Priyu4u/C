#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of lines : ");
    scanf("%d", &n);
    // Question: Print the given pattern
    // 1 2 3 4 3 2 1
    // 1 2 3   3 2 1
    // 1 2       2 1
    // 1           1
    // FOR n = 4
    int m = n - 1;
    int nst = m;
    int nsp = 1;
    int b = n - 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= n)
        {
            printf("%d ", i);
        }
        else
        {
            printf("%d ", b);
            b--;
        }
    }
    printf("\n");
    for(int j=1; j<=m; j++){
        int c = n - 1;
        int a = 1;
        for(int k=1; k<=nst; k++){
            printf("%d ",a);
            a++;
        }
        for(int l=1; l<=nsp; l++){
            printf("  ");
        }
        for(int p=1; p<=nst; p++){
            printf("%d ",c);
            c--;
        }
        
        nst--;
        nsp+=2;
        printf("\n");
        c--;
    }
    return 0;
}