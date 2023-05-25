#include"variadic_functions.h"
/**
 *print_numbers - print numbers followed by a new line
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 *@...: the integers to print
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list op;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(op, n);
	while (i--)
		printf("%d%s", va_arg(op, int),
			i ? (separator ? separator : "") : "\n");
	va_end(op);
}


