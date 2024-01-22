#include<stdio.h>
int main(){
    /*
    Question: Print the given patter.
                *
              * * * 
                *
    */
    int n;
    printf("Enter Number of Rows(Only Odd Numbers) : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j==(n/2)+1 || i==(n/2)+1) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}