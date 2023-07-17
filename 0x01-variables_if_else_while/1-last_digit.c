#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the last diget of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;
    srand(time(0));
    n = rand() % 1000; // Generates a random number between 0 and 999

    int lastDigit = n % 10;

    printf("Last digit of %d is ", n);

    if (lastDigit > 5)
    {
        printf("%d and is greater than 5", lastDigit);
    }
    else if (lastDigit == 0)
    {
        printf("0");
    }
    else
    {
        printf("%d and is less than 6 and not 0", lastDigit);
    }

    printf("\n");

    return 0;
}

