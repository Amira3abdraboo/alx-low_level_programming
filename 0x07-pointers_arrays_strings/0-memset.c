#include"main.h"
/**
 * _memset- fill a block of memory with a constant
 * @s: a pointer to the memory area
 * @n: number of bytes of the memory area
 * @b: constant
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
