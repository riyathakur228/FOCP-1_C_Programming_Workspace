#include <stdio.h>

int digitSum(int n)
{
    int sum = 0;

    while(n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}

int main()
{
    int n, i, j, count = 0;
    int a[100];

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(digitSum(a[i]) == digitSum(a[j]))
            {
                count++;
            }
        }
    }

    printf("Count = %d", count);

    return 0;
}