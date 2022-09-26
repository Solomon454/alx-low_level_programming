#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer memory area to fill
 * @b: the number of bytes to fill
 * @n: amount of times to be filled
 * Return: returns a pointer to the memory @s
 */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                s[i] = b;
        }

        return (s);
}
