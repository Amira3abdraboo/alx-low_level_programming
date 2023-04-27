#include"main.h"

/**
 *print_diagonal -draws a diagonal line on the terminal
 *@n:is the number of times the character \ should be printed
 *
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == n)
			{
				_putchar('\\');
			}
			else if (j < i)
			{
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
