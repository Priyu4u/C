#include<stdio.h>
int main(){
    float m1 = 30; // maths marks
    float m2 = 36; // physics marks
    float m3 = 39; // chemistry marks
    float m4 = 40; // english marks 
   
    float P = (m1 + m2 + m3 + m4) * 10/16;
    printf("Percentage : %f",P);
    return 0;
}