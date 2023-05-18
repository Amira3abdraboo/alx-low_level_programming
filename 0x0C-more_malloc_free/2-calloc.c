#include"main.h"
#include<stdlib.h>
/**
 *_memset - fills a memory with a constant byte
 *@s: pointer to put the constant
 *@b: char
 *@n: number of times to copy
 *Return: pointer
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
/**
 * *_calloc - function that allocates memory for an array.
 *@nmemb: array input
 *@size: size of the array
 *Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(sizeof(int) * nmemb);

	if (p == 0)
		return (NULL);

	_memset(p, 0, sizeof(int) * nmemb);

	return (p);
}
