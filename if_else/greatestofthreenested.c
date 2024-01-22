#include<stdio.h>
int main(){
    int a;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd Number : ");
    scanf("%d",&b);
    int c;
    printf("Enter 3rd Number : ");
    scanf("%d",&c);
    if(a>b){ // b sabse bada ho hi nahi sakta
        if(a>c)
        printf("%d is the greatest",a);
        else
        printf("%d is the greatest",c);
    }
    else{ // b>a if ka ulta yani a chota aur b bada 
         if(b>c)
         printf("%d is the greatest",b);
         else
         printf("%d is the greatest",c);
    }
    return 0;
}