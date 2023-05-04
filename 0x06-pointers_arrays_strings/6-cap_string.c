#include"main.h"
/**
 **cap_string - Write a function that capitalizes all words of a string
 *@s: input string
 *Return: string with captialized words
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (islower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
	s++
	}
	return (ptr);
}
