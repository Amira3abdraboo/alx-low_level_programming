#include"variadic_functions.h"
/**
 *print_strings -  prints strings, followed by a new line.
 *@separator: is the string to be printed between strings
 *@n: is the number of strings passed to the function
 *@...:  the strings to print
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list op;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(op, n);
	while (i--)
		printf("%s%s", (str = va_arg(op, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(op);
}

