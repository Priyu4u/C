#include<stdio.h>
int main(){
    // Question: WAP to print sum of all odd digits of a number.
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int LastDigit = 0;
    int sum = 0;
    while(n!=0){
        LastDigit = n%10;
        if(LastDigit%2 != 0) sum = sum + LastDigit;
        n = n/10;
    }
    printf("The sum odd digits is %d",sum);
    return 0;
}