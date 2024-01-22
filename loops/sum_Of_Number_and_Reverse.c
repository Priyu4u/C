#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int reverse = 0;
    while( n!=0){
        reverse = reverse * 10;
        reverse = reverse + (n%10);
        n = n/10;
    }
    int sum = n + reverse;
    printf("The sum of the number and it's reverse is %d",sum);
    return 0;
}