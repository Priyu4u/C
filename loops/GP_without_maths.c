#include<stdio.h>
int main(){
    // Question : Display this GP - 1,2,4,8,16,32,.. upto 'n' terms;
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int a = 1;
    for( int i=1; i<=n; i++){
        printf("%d ",a);
        a = a * 2;
    }
    return 0;
}