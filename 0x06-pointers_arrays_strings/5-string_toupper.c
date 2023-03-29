#include "main.h"
/**
 * string_toupper - function that changes all lowercase letter to uppercase
 * @str: parameter
 * Return: lowercase changed to uppercase
 */
char *string_toupper(char *str)
{
	int alph = 0;

	while (str[alph++])
	{
		if (str[alph] >= 'a' && str[alph] <= 'z')
			str[alph] -= 32;
	}
	return (str);
}
