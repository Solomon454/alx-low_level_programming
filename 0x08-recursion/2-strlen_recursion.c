#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s: string to count
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int k = 0;

	if (*s)
	{
		k = _strlen_recursion(s + 1);
		return (k += 1);
	}
	return (0);
}
