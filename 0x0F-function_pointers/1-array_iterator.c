#include "function_pointers.h"

/**
 *array_iterator - maps an array through a pointer
 *@array: an array input
 *@size: size of the array
 *@action: pointer
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

		if (array && action && size)
			while (array <= end)
				action(*array++);
}
