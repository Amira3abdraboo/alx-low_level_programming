#include"main.h"
#include<stdlib.h>
/**
 **string_nconcat - function concatenates two strings
 *@s1: input
 *@s2: input to be concatenated
 *@n: number of bytes input
 *Return: NULL om failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int i, j, s1_l, s2_l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_l = 0; s1[s1_l] != '\0'; s1_l++)
		;
	for (s2_l = 0; s2[s2_l] != '\0'; s2_l++)
		;
	m = malloc(s1_l + n + 1);

	if (m == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		m[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		m[i] = s2[j];
		i++;
	}

	m[i] = '\0';
	return (m);
}
