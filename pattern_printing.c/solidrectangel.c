#include<stdio.h>
int main(){
    int n;
    printf("Enter number of row : ");
    scanf("%d",&n);
    int m;
    printf("Enter number of column : ");
    scanf("%d",&m);
    for(int i=1; i<=n; i++){
        for(int i=1; i<=m; i++){
        printf("* ");
        }
        printf("\n");
    }
    return 0;
}