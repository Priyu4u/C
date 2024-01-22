#include <stdio.h>
int main()
{
    int x;
    printf("Enter 1st side : ");
    scanf("%d", &x);
    int y;
    printf("Enter 2nd side : ");
    scanf("%d", &y);
    int z;
    printf("Enter 3rd side : ");
    scanf("%d", &z);

    if (x + y > z && y + z > x && z + x > y)
    {
        printf("They can be the sides of a triangle");
    }
    else
    {
        printf("They cannot be the sides of a triangle");
    }

    return 0;
}