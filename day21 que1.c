# Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits = 0, swapped;

    scanf("%d", &num);
    int original = num;

    last = num % 10;

    while (num >= 10) {
        num /= 10;
        digits++;
    }
    first = num;

    int pow10 = pow(10, digits);
    int middle = original % pow10;
    middle = middle / 10;

    swapped = last * pow10 + middle * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swapped);
    return 0;
}
