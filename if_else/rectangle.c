#include<stdio.h>
int main(){
    int length;
    printf("Enter Length : ");
    scanf("%d",&length);
    int breadth;
    printf("Enter Breadth : ");
    scanf("%d",&breadth);
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    if(area>perimeter){
        printf("Area is greater than Perimeter");
    }
    if(area<perimeter){
        printf("Area is smaller than Perimeter");
    }
    
    return 0;
}