#include"main.h"

/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *Return: void
 */

void more_numbers(void)
{
	int c, k;

	for (k = 1; k <= 10; k++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar('1');
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}
