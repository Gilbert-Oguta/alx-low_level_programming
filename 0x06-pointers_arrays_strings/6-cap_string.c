#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @str: string to capitalize
 * Return: returns the capitalized string
 */
char *cap_string(char *str)
{
	int ser = 0;

	while (str[++ser])
	{
		while (!(str[ser] >= 'a' && str[ser] <= 'z'))
			ser++;

		if (str[ser - 1] == ' ' ||
				str[ser - 1] == '\t' ||
				str[ser - 1] == '\n' ||
				str[ser - 1] == ',' ||
				str[ser - 1] == ';' ||
				str[ser - 1] == '.' ||
				str[ser - 1] == '!' ||
				str[ser - 1] == '?' ||
				str[ser - 1] == '"' ||
				str[ser - 1] == '(' ||
				str[ser - 1] == ')' ||
				str[ser - 1] == '{' ||
				str[ser - 1] == '}')
			str[ser] -= 32;
	}
	return (str);
}
