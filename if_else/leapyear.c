#include<stdio.h>
int main(){
    int x;
    printf("Enter a year : ");
    scanf("%d",&x);

    if(x%4==0){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}