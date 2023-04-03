#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: where bytes are copied to
 * @src: source where bytes are copies from
 * @n: number of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
