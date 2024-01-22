#include<stdio.h>
int main(){
     /*
    Question: Print the given pattern.
                  A
                A B A
              A B C B A
            A B C D C B A
    */
    int n;
    printf("Enter number of lines : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        int a = 1;
        for(int k=1; k<=i; k++){
            int d = a + 64;
            char chh = (char)d;
            printf("%c ",chh);
            a++;
        }
        int b = i - 1;
        for(int l=1; l<=i-1; l++){
            int d = b + 64;
            char ch = (char)d;
            printf("%c ",ch);
            b--;
        }
        printf("\n");
    }

    return 0;
}