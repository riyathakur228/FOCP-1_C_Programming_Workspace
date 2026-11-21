#include <stdio.h>

int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int n, m, i, count = 0;

    printf("Enter n and m: ");
    scanf("%d %d", &n, &m);

    for(i = 1; i <= m; i++)
    {
        if(gcd(n, i) == 1)
        {
            count++;
        }
    }

    printf("Count = %d", count);

    return 0;
}