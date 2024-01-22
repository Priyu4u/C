#include<stdio.h>
int main(){
    /*
    Question: Print the given patter.
            *       *
              *   *
                * 
              *   *
            *       *
    */
    int n;
    printf("Enter Number of Rows(only odd numbers) : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j || i+j==n+1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}