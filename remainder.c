#include<stdio.h>
int main(){
    int a,b; // a>b
    printf("Enter Dividend : ");
    scanf("%d",&a);

    printf("Enter Divisor : ");
    scanf("%d",&b);

    int q = a/b;
    printf("The Quotient is When %d is Divided By %d is : %d \n",a,b,q);
    int r = a - b*q; // Dividend = Divisor * Quotient + Remainder
    printf("The Remainder When %d is Divided By %d is : %d ",a,b,r);
    return 0;
}