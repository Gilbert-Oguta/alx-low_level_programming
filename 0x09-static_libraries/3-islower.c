#include "main.h"
/**
 * _islower - check if a char is lowercase
 * @s: is the char to be checked
 * Return: 1 if char is lowercase, 0 if otherwise
 */

int _islower(int s)
{
        if (s >= 'a' && s <= 'z')
                return (1);
        else
                return (0);
}

