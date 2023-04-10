#include "main.h"
#include <stdio.h>
/**
 * _isupper - function that checks for uppercase character or not
 * @c: tested character
 * Return: returns 1 if it is uppercase, or 0 if it not uppercase
 */
int _isupper(int c)
{
        if ((c >= 'A') && (c <= 'Z'))
        {
                return (1);
        }
        return (0);
}

