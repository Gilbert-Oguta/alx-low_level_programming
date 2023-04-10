#include"main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: The destination value
 * @src: The source value
 * @n: The limit of concatenation
 * Return: returns new concatenation string
 */
char *_strncat(char *dest, char *src, int n)
{
        int index = 0, destlen = 0;

        while (dest[index++])
                destlen++;

        for (index = 0; src[index] && index < n; index++)
                dest[destlen++] = src[index];

        return (dest);
}

