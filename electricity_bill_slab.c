/*Electricity Bill Slab Implement a program to calculate the electricity bill based on 
units consumed: Units 0–100 101–200 
Above 200 Use if-else ladder. Example: Input: 250 Output: 850*/

#include <stdio.h>
int main() {
    int units, bill;
    scanf("%d", &units);

    if (units <= 100)
        bill = units * 2;
    else if (units <= 200)
        bill = 200 + (units - 100) * 3;
    else
        bill = 500 + (units - 200) * 3.5;

    printf("%d", bill);
    return 0;
}
