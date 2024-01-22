#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%2==0){ // yaha pe == represent kar raha hai comparison
        printf("Even number");
    }
    else{
        printf("Odd Number");
    }

    return 0;
}