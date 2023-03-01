#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    /* Initialize random number generator */
    srand(time(NULL));

    /* Generate a random number between -2147483648 and 2147483647 */
    n = rand() - RAND_MAX / 2;

    /* Check if the number is positive, negative, or zero */
    if (n > 0)
        printf("%d is positive\n", n);
    else if (n == 0)
        printf("%d is zero\n", n);
    else
        printf("%d is negative\n", n);

    return (0);
}

