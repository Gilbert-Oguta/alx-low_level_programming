#include "main.h"
/**
 * _strncpy - function that copies a string, with number of bites
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: max number of bytes copied
 * Return: copied string with the number of bytes
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for (; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}

