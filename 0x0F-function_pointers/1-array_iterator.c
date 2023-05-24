#include "function_pointers.h"

/**
 *array_iterator - executes a function on each element of an array
 *@array: an array
 *@size: size of the array
 *@action: pointer
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1

		if (array && action && size)
			while (array <= end)
				action(*array++);
}
