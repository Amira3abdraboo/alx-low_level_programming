#include"main.h"
/**
 * _memset- fill a block of memory with a specific value
 * @s: a pointer to the memory area
 * @n: number of bytes of the memory area
 * @b: constant value
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++; n--)
	{
		s[i] = b;
	}
	return (s);
}
