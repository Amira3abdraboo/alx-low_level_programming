#include"main.h"
#include"stdio.h"
/**
 *print_diagsums - sum of two diagonals of a square matrix of integers.
 *@a: array
 *@size: size of the array
 *Return: 0
 *
 */
void print_diagsums(int *a, int size)
{
	int i, S1 = 0, S2 = 0;

	for (i = 0; i < size; i++)
	{
		S1 += a[i];
		S2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", S1);
	printf("%d\n", S2);
}
