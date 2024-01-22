#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    if (x % 5 == 0 || x % 3 == 0)
    {
        if (x % 15 != 0)
        {
            printf("Satisfy the given statement"); // Divisible by 5 or 3 but not by 15
        }
        else
        {
            printf("Does not satisfy the given statement");
        }
    }
    else
    {
        printf("Does not satisfy the given statement");
    }
    return 0;
}