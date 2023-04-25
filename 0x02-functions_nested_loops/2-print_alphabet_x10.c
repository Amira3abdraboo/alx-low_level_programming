#include"main.h"
/**
 * print_alphabet 10 times, in lowercase,
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	char ch;
	int x;

	x = 0;

	while (x < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++
		}
		_putchar('\n');
		x++
	}
}
