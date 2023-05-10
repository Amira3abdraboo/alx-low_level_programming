#include"main.h"
/**
 *_strlen_recursion - returns the length of a string
 *@s: string input
 *Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int jtr = 0;

	if (*s > '\0')
	{
		jtr += _strlen_recursion(s + 1) + 1;
	}
	return (jtr);
}
