#include"variadic_function.h"
/**
 * sum_them_all - sum all of its parameters
 * @n: number of arguments
 * @...: the integers to sum
 * Return: sum of the integers
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list op;

	if (!n)
		return (0);
	va_start(op, n);
	while (i--)
		s += va_arg(op, int);
	va_end(op);
	return (s);
}
