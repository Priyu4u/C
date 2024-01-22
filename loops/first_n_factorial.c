#include<stdio.h>
int main(){
    // Print the factorial of first 'n' numbers.
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int product = 1;
    for(int i = 1; i<=n; i++){
        product = product * i;
        printf("The factorial of %d is : %d\n",i,product);
    }
    return 0;
}