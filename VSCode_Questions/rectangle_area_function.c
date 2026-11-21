#include <stdio.h>

long long area(int length, int width)
{
    return (long long)length * width;
}

int main()
{
    int length, width;

    printf("Enter length and width: ");
    scanf("%d %d", &length, &width);

    printf("Area = %lld", area(length, width));

    return 0;
}