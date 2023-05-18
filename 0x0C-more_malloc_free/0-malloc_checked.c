#include"main.h"
#include<stdlib.h>
/**
**malloc_checked - allocate memory using malloc
*@b: input
*Return: pointer on allocated memory.
*/
void *malloc_checked(unsigned int b)
{
	int *n = malloc(b);

	if (n == 0)
		exit(98);
	return (n);
}
