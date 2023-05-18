#include"main.h"
#include<stdlib.h>
/**
 **array_range - creates an array of integers.
 *@min: input
 *@max: input
 *Return: pointer to the new created array
 */
int *array_range(int min, int max)
{
	int *m;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	m = malloc(sizeof(int) * size);

	if (m == 0)
		return (NULL);
	for (i = 0; min <= max; i++)
		m[i] = min++;
	return (m);
}
