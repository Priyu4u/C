#include<stdio.h>
int main(){
    // WAP to print the sum of the series
    // 1 - 2 + 3 - 4 + 5 - 6... upto 'n'.
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum = 0;
    if(n%2==0){
        sum = -n/2;
    }
    else{
        sum = -n/2 + n;
    }
    printf("The sum is : %d",sum);
    return 0;
}