#include"main.h"
#include<stdlib.h>
/**
 *main - multiplies two numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: 0 on Success, 1 on fail
 */
int main(int argc, char *argv[])
{
	int sum;

	if (sum == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
