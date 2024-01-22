#include<stdio.h>
int main(){
    int x,y ;
    printf("Enter Coordinates : ");
    scanf("%d %d",&x ,&y);
    if(x==0 && y==0){
        printf("The point is at origin");
    }
    else if(x==0){
        printf("The point lies on Y-axis");
    }
    else if(y==0){
        printf("The point lies on X-axis");
    }
    else{
        printf("Not on x-axis, y-axis and origin");
    }
    return 0;
}