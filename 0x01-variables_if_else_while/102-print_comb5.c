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
	int w, k;
	int a, b, c, d,;

	for (w = 0; w < 100; w++)
	{
		a = w / 10; /*double fnum*/
		b = w % 10; /*singles fnum*/

		for (k = 0; k < 100; k++)
		{
			c = k / 10; /*doubles snum*/
			d = k % 10; /*singles snum*/

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return(0);
}
