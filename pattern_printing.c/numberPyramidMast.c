#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines : ");
    scanf("%d",&n);
    // Question: Print the given pattern
    // 1234567
    // 123 567
    // 12   67
    // 1     7
    int m = n -1;
    int nst = m;
    int nsp = 1;
    for(int b=1; b<=2*n-1; b++){
        printf("%d ",b);
    }
    printf("\n");
    for(int i=1; i<=m; i++){
        int a = 1;
        for(int j=1; j<=nst; j++){
            printf("%d ",a);
            a++;
        }
        for(int k=1; k<=nsp; k++){
            printf("  ");
            a++;
        }
        for(int l=1; l<=nst; l++){
            printf("%d ",a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}