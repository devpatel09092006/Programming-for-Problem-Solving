// Write a program to find the sum of first 10 natural numbers using a loop.

#include <stdio.h>

int main () {

    int i, sum = 0;

    for (i = 1; i <= 10; i++) {
        sum = sum + i;
    }

    printf("Sum of first 10 natural number is: %d\n", sum);

    return 0;

}