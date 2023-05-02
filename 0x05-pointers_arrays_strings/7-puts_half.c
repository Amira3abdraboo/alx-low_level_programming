#include"main.h"
/**
 *puts_half - prints half of a string, followed by a new line
 *@str: input
 *Return: half of input
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
		;

	i++;
	for (i /= 2; i != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
