#include<stdio.h>
void swap(int* x, int* y){
    int temp;
    temp = *x; // temp me a ka value aa gaya
    *x = *y; // *x yani a me *y yani b ka value aa gaya
    *y = temp; // *y yani b me temp aa gaya 
    return;
}
int main(){
    int a; 
    printf("Enter a :");
    scanf("%d",&a);
    int b; 
    printf("Enter b :");
    scanf("%d",&b);
    swap(&a,&b);
    printf("The value of a is %d\n",a);
    printf("The value of a is %d",b);
    return 0;
}