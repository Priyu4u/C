#include<stdio.h>
int main(){
    /*
    Question: Print the given pattern.
        * * * * *      
        *       *
        * * * * *
    */
    int n;
    printf("Enter Number of Rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter Number of Columns : ");
    scanf("%d",&m);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(i==1 || i==n || j==1 || j==m){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}