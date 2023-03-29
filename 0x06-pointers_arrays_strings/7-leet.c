#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @str: string that will be encoded
 * Return: returns encoded string
 */
char *leet(char *str)
{
	int replace, k;
	char one[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char two[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char num[] = {'4', '3', '0', '7', '1', '\0'};

	for (replace = 0; str[replace] != '\0'; ++replace)
	{
		for (k = 0; k < 5; k++)
		{
			if (str[replace] == one[k] || str[replace] == two[k])
			{
				str[replace] = num[k];
			}
		}
	}
	return (str);
}
