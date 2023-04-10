#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: The first string
 * @s2: The second string
 * Return:
 *          returns zero if s1 == s2
 *          returns negative number if s1 < s2
 *          returns positive number if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
        int a = 0, b = 0, c = 0, x = 0, comp;

        while (s1[a])
        {
                a++;
        }
        while (s2[b])
        {
                b++;
        }

        if (a <= b)
        {
                comp = a;
        }
        else
        {
                comp = b;
        }
	while (c <= comp)
        {
                if (s1[c] == s2[c])
                {
                        c++;
                        continue;
                }
                else
                {
                        x = s1[c] - s2[c];
                        break;
                }

                c++;
        }
        return (x);
}

