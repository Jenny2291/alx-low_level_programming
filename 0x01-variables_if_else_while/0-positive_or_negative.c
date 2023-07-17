#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-Determines if a number is positive, negetive or zero.
 *
 * Return: Always 0 (success)
 */ 
int main(void)
{
    int n;
    srand(time(0));
    n = rand() % 201 - 100; // Generates a random number between -100 and 100

    printf("The number %d is ", n);

    if (n > 0)
    {
        printf("positive");
    }
    else if (n < 0)
    {
        printf("negative");
    }
    else
    {
        printf("zero");
    }

    printf("\n");

    return 0;
}

