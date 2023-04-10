#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack:m main string to be looked for
 * @needle: searched in haystack
 * Return: returns a pointer beginning of a substring
 */
char *_strstr(char *haystack, char *needle)
{
        int y;

        if (*needle == 0)
                return (haystack);

        while (*haystack)
        {
                y = 0;

                if (haystack[y] == needle[y])
                {
                        do {
                                if (needle[y + 1] == '\0')
                                        return (haystack);

                                y++;
                        } while (haystack[y] == needle[y]);
                }
                haystack++;
        }
        return ('\0');
}

