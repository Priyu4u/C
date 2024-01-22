#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i=1;i<=x;i++){
        fact = fact * i;
    }
    return fact;
}
int permutation(int n, int r){
    int nPr = factorial(n)/factorial(n-r);
    return nPr;
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int r;
    printf("Enter r : ");
    scanf("%d",&r);
    int nPr = permutation(n,r);
    printf("The permutation is %d",nPr);
    
    return 0;
}