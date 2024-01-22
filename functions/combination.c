#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int r;
    printf("Enter r : ");
    scanf("%d",&r);
    int n_fact = 1;
    int r_fact = 1;
    int n_r_fact = 1;
    for(int i=1;i<=n;i++){
        n_fact = n_fact * i;  
    }
    for(int i=1;i<=r;i++){
        r_fact = r_fact * i;  
    }
    for(int i=1;i<=n-r;i++){
        n_r_fact = n_r_fact * i;  
    }
    int nCr = n_fact / (r_fact * n_r_fact);
    printf("The combination is : %d",nCr);
    return 0;
}