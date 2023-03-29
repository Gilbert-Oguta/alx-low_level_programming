#include "main.h"
/**
 * string_toupper - function that changes all lowercase letter to uppercase
 * @str: parameter
 * Return: lowercase changed to uppercase
 */
char *string_toupper(char *str)
{
	int char = 0;

	while (str[char++])
	{
		if (str[char] >= 'a' && str[char] <= 'z')
			str[char] -= 32
	}
	return (str);
}
