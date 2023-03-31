#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @str: string to capitalize
 * Return: returns the capitalized string
 */
char *cap_string(char *str)
{
	int len, index;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	for (len = 0; str[len] != '\0'; len++)
	{
		if (len == 0 && str[len] >= 97 && str[len] <= 122)
			str[len] -= 32;

		for (index = 0; index < 13; index++)
			if (str[len] == sep[index])
				if (str[len + 1] >= 97 && str[len + 1] <= 122)
					str[len + 1] -= 32;
	}
	return (str);
}
