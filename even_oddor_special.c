/* Even, Odd or Special Implement a C program that takes an integer n. 
• If n is divisible by both 2 and 5, print Special.  • If it is divisible only by 2, 
print Even. 
• If it is divisible only by 5, print Five.
• Otherwise, print Odd/Other.*/


#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    if(n%2==0 && n%5==0)
        printf("Special");
    else if(n%2==0)
        printf("Even");
    else if(n%5==0)
        printf("Five");
    else
        printf("Odd/Other");

    return 0;
}
