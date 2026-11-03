/*Three Numbers – Find the Middle Implement a program that takes three different 
integers a, b, and c and prints the middle value (neither maximum nor minimum).
 Example: Input: 10 25 15 Output: 15*/
#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if ((a>b && a<c) || (a<b && a>c))
        printf("%d", a);
    else if ((b>a && b<c) || (b<a && b>c))
        printf("%d", b);
    else
        printf("%d", c);

    return 0;
}