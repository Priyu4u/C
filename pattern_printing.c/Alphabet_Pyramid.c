#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        // For spaces
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        // For alphabets
        int a = 1;
        for(int k=1; k<=2*i-1; k++){
            int d = a + 64;
            char ch = (char)d;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}