#include"main.h"
#include<stdlib.h>
/**
 **str_concat - concatenates two strings.
 *@s1: first input
 *@s2: second input
 *Return: contents of s1 followed by s2, NUll on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *m;
	int i, sm;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = sm = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[sm] != '\0')
		sm++;

	m = malloc(sizeof(char) * (i + sm + 1));

	i = sm = 0;

	while (s1[i] != '\0')
	{
		m[i] = s1[i];
		i++;
	}

	while (s2[sm] != '\0')
	{
		s2[sm] = m[i];
		i++, sm++;
	}

	if m[i] = '\0';
	return (m);
}


