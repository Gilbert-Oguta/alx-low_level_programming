#include "main.h"
/**
 * _strlen -  returns the length of a string
 * @s: string to count
 * Return: string length
 */
int _strlen(char *s)
{
	int num, incr;

	incr = 0;
	for (num = 0; s[num] != '\0'; num++)
		incr++;

	return (incr);
}
