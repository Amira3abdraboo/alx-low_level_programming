#include"main.h"
/**
 *print_array - prints elements of an array of integers
 *@n: element of the array
 *@a: array name
 *Return: n and a inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
