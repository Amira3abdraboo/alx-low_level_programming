#include"main.h"
/**
 **create_array -array of chars, and initializes it with a specific char
 *@size: number of bytes in the memory
 *@c: input char
 *Return:  pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (size == 0 || m == 0)
		return (0);
	while (size--)
		m[size] = c;
	return (m);
}

