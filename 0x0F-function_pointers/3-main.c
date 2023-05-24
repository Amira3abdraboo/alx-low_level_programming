#include"3-calc.h"
/**
 *main - check the code
 *@argc: the number of arguments
 *@argv: the argument vector
 *Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int (*op_fun)(int, int), a, b;

	if (argc != 4)
		printf("Error\n", exit(98));

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_fun = get_op_func(argv[2]);
	if (!op_fun)
		printf("Error\n", exit(99));

	if (!b && (argv[2][0] == '/' || arv[2][0] == '%'))
		printf("Error\n", exit(100));
	printf("%d\n", op_fun(a, b));
	return (0);
}