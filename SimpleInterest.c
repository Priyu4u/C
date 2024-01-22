#include<stdio.h>
int main(){
    float Principle; // We created a container named Principle
    printf("Enter Principle :");
    scanf("%f",&Principle);
     
    float Rate;
    printf("Enter Rate :");
    scanf("%f",&Rate);
   
    float Time;
    printf("Enter Time :");
    scanf("%f",&Time);
    
    float SI = Principle * Rate * Time / 100;
    printf("Simple Interest : %f",SI);
    return 0;
}