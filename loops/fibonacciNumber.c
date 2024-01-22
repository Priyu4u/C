#include<stdio.h>
int main(){
    // Question: Print the n'th fibonacci number.
    // ( 1 1 2 3 5 8 13 21 34 55 ... )
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a = 1; 
    int b = 1; 
    int sum = 1; // we can't put here 0
    for(int i = 1; i<=n-2; i++){ 
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("The %dth fibonacci term is : %d",n,sum);
    return 0;
}