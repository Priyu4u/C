#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i=1; i<=x; i++){
        fact = fact * i;
    }
    return fact;
}
int combination(int n, int r){
    int ncr = factorial(n)/(factorial(r) * factorial(n-r));
    return ncr;
}
int main(){
    int n;
    printf("Enter number of lines : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        // Print spaces
        for(int j=0; j<n-i-1; j++){
            printf("  ");
        }

        // Print values
        for(int j=0; j<=i; j++){
            int iCj = combination(i,j);
            printf("%d   ",iCj); // Adjust spacing for formatting
        }
        printf("\n");
    }
    return 0;
}
