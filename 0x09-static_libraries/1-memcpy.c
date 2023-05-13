#include"main.h"
/**
 * *_memcpy - function that copies memory area.
 *@n: number of bytes from memory area
 *@src: source input
 *@dest: destination input
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		dest[d] = src[d];
	}
	return (dest);
}
