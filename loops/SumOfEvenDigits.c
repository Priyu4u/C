#include<stdio.h>
int main(){
    /* Question: WAP to print sum of all the even digits of
    a given number. */
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int sum = 0;
    int lastDigit = 0;
    while(n!=0){
        lastDigit = n%10;
        if(lastDigit%2==0) sum = sum + lastDigit;
        n = n/10;
    }
    printf("The sum of even digits is %d",sum);
    return 0;
}