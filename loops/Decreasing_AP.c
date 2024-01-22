#include<stdio.h>
int main(){
    // Question : Display this AP - 100, 97, 94,.. upto all terms which are positive
    int a = 100;
    for( int i = 1; i<=34; i++){ 
        // if we don't want to use maths we can modify the condition as a>0
        printf("%d ",a);
        a = a -3;
    }
    return 0;
}