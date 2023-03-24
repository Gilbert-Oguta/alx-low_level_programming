#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 * main - tests function that prints if integer is positive or negative
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        if (n > 0)
        {
                printf("%d is positive\n", n);
        }
        else if  (n < 0)
        {
                printf("%d is negative\n", n);
        }
        else if (n == 0)
        {
                printf("%d is zero\n", n);
        }
        else
        {
                printf("%d  error\n", n);
        }

        return (0);
