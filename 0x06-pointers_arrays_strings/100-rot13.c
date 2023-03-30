#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @str: The string targeted
 * Return: returns the encoded string
 */
char *rot13(char *str)
{
	int n = 0;

	while (str[n])
	{
		while ((str[n] >= 'a' && str[n] <= 'z') || (str[n] >= 'A' && str[n] <= 'Z'))
		{
			if ((str[n] > 'm' && str[n] <= 'z') || (str[n] > 'M' && str[n] <= 'Z'))
			{
				str[n] -= 13;
				break;
			}
			str[n] += 13;
			break;
		}
		n++;
	}
	return (str);
}
