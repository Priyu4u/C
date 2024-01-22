#include<stdio.h>
int main(){
    /*
    Question: Print the given pattern.
                  1
                1 2 3 
              1 2 3 4 5
            1 2 3 4 5 6 7
    */
    int n;
    printf("Enter the number of lines : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        // Print spaces for each row
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        // Print numbers for each row 
        for(int k=1; k<=2*i-1; k++){
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}