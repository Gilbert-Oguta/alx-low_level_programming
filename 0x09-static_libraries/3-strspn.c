#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: segment to be placed
 * @accept: string containing a list of characters
 * Return: returns the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int num = 0;
        int a, b;

        for (a = 0; s[a]; a++)
        {
                for (b = 0; accept[b]; b++)
                {
                        if (s[a] == accept[b])
                        {
                                num++;
                                break;
                        }
                }
                if (!accept[b])
                        break;
        }
        return (num);
}

