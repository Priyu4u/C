#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int a = 1;
    int b = 1;
    int sum = 1;
    printf("The 1 fibonacci term is : %d\n",a);
    printf("The 2 fibonacci term is : %d\n",b);
    for(int i = 1; i<=n-2; i++){
        sum = a + b;
        a = b;
        b = sum;
        printf("The %d fibonacci term is : %d\n",(i+2),sum);
    }
    return 0;
}