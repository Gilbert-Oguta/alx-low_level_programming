#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - contains main function
 * @argc: argument count
 * @argv: argument vector
 * Return: NULL
 */
int main(int argc, char *argv[])
{
	int x, y;
	int (*optn)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	optn = get_op_func(argv[2]);

	if (optn == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);

	printf("%d\n", optn(x, y));
	return (0);
}
