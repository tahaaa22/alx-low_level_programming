#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: first pointer
 * @src: second pointer
 * @n: number to copy
*/

char *_strncpy(char *dest, char *src, int n)
{
        int i = 0, c = 0, m = 0;

        while (src[m])
                m++;
        while (1)
        {
                if (c == n || c == m)
                        break;
                        dest[i] = src[c];
                        c++;
                i++;
        }
        return (dest);
}
