#include<stdio.h>
int main(){
    int cp;
    printf("Enter Cost Price : ");
    scanf("%d",&cp);
    int sp;
    printf("Enter Selling Price : ");
    scanf("%d",&sp);
    if(sp>cp){
        printf("Profit");
    }
    if(cp>sp){
        printf("Loss");
    }

    if(cp==sp){
        printf("Neither Profit Nor Loss");
    }
    return 0;
}