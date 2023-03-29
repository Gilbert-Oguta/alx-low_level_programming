#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: the string to be appended
 * @src: the string to be concatenated upon
 *
 * Return: returns pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	return (dest);
}
