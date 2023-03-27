#include "main.h"
/**
 * _strlen -  returns the length of a string
 * @s - string
 * Return: none
 */
int _strlen(char *s)
{
	int num, incr;
	incr = 0;
	for (num = 0; s[num] != '\0'; num++)
		incr++;

	return (incr);
}
