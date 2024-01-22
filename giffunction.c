#include<stdio.h>
int main(){
    float x;
    printf("Enter Your Decimal Value : ");
    scanf("%f",&x);
    // only for positive numbers 
    int y = x;
    float z = x - y;
    printf("Fractional Part Of %f is : %f",x,z);
    return 0;
}