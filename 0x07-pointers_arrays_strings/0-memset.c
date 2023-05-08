#include"main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @n: number of  bytes of the memory area
 * @s: starting address of memory to be filled
 * @b: desired value
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; n > 0; d++; n--)
	{
		s[d] = b;
	}
	return (s);
}
