#include<stdio.h>
int main(){
    int ram;
    printf("Enter Ram age : ");
    scanf("%d",&ram);
    int shyam;
    printf("Enter Shyam age : ");
    scanf("%d",&shyam);
    int ajay;
    printf("Enter Ajay age : ");
    scanf("%d",&ajay);
    if(ram<shyam && ram<ajay){
        printf("Ram is youngest");
    }
    if(shyam<ram && shyam<ajay){
        printf("Shyam is youngest");
    }
    if(ajay<ram && ajay<shyam){
        printf("Ajay is youngest");
    }
    return 0;
}