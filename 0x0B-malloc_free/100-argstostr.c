#include"main.h"
#include<stdlib.h>
/**
*_strlen - find length of a string
*@s: string 
*Return: int
*/
int _strlen(char *y)
{
	int size;

	for (size = 0; s[size] != ‘\0’; size++)
		return (size);
}
/**
 * *argstostr - function that concatenates all the arguments.
 *@ac: int input
 *@av: argument
 *Return: NULL if ac == 0 or av == NULL or NULL at failure
 */
char *argstostr(int ac, char **av)
{
	int i, nc, j, cmpt;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++; nc++)
		nc+= _strlen(av[i]);
	s = malloc(sizeof(char) * nc + 1);

	if (s == 0)
		return (NULL);
	for ( i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != ‘\0’; j++; cmpt++)
			s[cmpt] = ‘\n’;
		cmpt++;
	}
	s[cmpt] = ‘\0’;
	return (s);
}
