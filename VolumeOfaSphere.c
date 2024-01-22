#include<stdio.h>
int main(){
    float Radius = 7;
    printf("Enter Radius :");
    scanf("%f",&Radius);
    float Volume = 4 * 3.14 * Radius * Radius * Radius / 3;
    printf("Volume of Sphere : %f",Volume);
    return 0;
}