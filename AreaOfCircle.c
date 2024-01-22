#include<stdio.h>
int main(){
    float Radius;
    printf("Enter Radius : ");
    scanf("%f",&Radius);
    float A = 3.1415 * Radius * Radius;
    printf("Area Of Circle : %f",A);
    return 0;
}