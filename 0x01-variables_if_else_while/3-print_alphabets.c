#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		putchar(s);
		s++;
	}

	s = 'A';

	while (s <= 'Z')
	{
		putchar(s);
		s++;
	}

	putchar('\n');

	return (0);
}	
