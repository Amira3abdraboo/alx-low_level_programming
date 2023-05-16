#include"main.h"
#include<stdlib.h>
/**
 ***alloc_grid - returns a pointer to a 2 dimensional array
 *@width: the width input
 *@height: the height input
 *Return: NULL when the width or height is 0 and on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	array = malloc(sizeof(*array) * height);

	if (width <= 0 || height <= 0 || array == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			array[i] = malloc(sizeof(**array) * width);
			if (array[i] == 0)
			{
				while (i--)
					free(array[i]);
				free(array);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				array[i][j] = 0;
		}
	}
	return (array);
}

