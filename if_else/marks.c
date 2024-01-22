#include<stdio.h>
int main(){
    int n;
    printf("Enter Percentage : ");
    scanf("%d",&n);
    /*
    more than 80 -> A grade
    more than 60 -> B grade
    more than 40 -> C grade
    less than 40 -> D grade
    */
   if(n>80){
    printf("A Grade\n");
   }
   else if(n>60){
    printf("B Grade\n");
   }
   else if(n>40){
    printf("C Grade\n");
   }
   else {
    printf("D Grade");
   }
    return 0;
}