#include<stdio.h>
int main(){
    double x1, y1, x2, y2, x3, y3 ;
    printf("Enter 1st coordinates : ");
    scanf("%d %d",&x1 ,&y1);
    printf("Enter 2nd coordinates : ");
    scanf("%d %d",&x2 ,&y2);
    printf("Enter 3rd coordinates : ");
    scanf("%d %d",&x3 ,&x3);
    double m1 = (y2 - y1) / (x2 - x1);
    double m2 = (y3 - y2) / (x3 - x2);
    if(m1 = m2){
        printf("The entered coordinates lies on a straight line");
    }
    else{
        printf("The entered coordinates does not lies on a straight line");
    }
    return 0;
}