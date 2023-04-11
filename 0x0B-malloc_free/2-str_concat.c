#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: seconf string
 * Return: pointer to a string if succesful, NULL is failed
 */
char *str_concat(char *s1, char *s2)
{
	char *con_str;
	int num, a = 0, b = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (num = 0; s1[num] || s2[num]; num++)
		b++;

	con_str = malloc(sizeof(char) * b);

	if (con_str == NULL)
		return (NULL);

	for (num = 0; s1[num]; num++)
		con_str[a++] = s1[num];

	for (num = 0; s2[num]; num++)
		con_str[a++] = s2[num];

			return (con_str);
}
