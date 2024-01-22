#include<stdio.h>
int main(){
    // Question: WAP to print reverse of a given number & store it.
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int r = 0; // r represents reverse
    while(n!=0){
        r = r * 10;
        r = r + (n%10);
        n = n/10;
    }
    // r = r/10; this is an alternative option.
    printf("The reverse of the digits is %d",r);
    return 0;
}