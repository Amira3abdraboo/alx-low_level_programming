#include"main.h"
#include<stdlib.h>
/**
 *_memset - fills a memory with a constant byte
 *@s: pointer to put the constant
 *@b: constant
 *@n: max byte to use
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *m = s;

	while (n--)
		*s++ = b;
	return (m);
}
/**
 * *_calloc - function that allocates memory for an array.
 *@nmemb: array input
 *@size: size of the array
 *Return: if nmemb or size is 0 it returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pr = malloc(sizeof(int) * nmemb);

	if (pr == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);
	return (pr);
}
