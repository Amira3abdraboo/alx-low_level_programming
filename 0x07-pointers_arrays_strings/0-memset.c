#include"main.h"
/**
 * *_memset - function that fills memory with a constant byte.
 * @n: bytes of the memory area
 * @s: pointer
 * @b: byte constant
 * Return: a pointer to the memory area s
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
