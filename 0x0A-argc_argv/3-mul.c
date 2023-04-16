#include "main.h"
#include <stdio.h>
/**
 * atoi - program that multiplies two numbers
 * @argc: number of particular arguments
 * @argv: array that contains particular arguments
 * Return: Success 0
 */
int _atoi(int argc, char *argv[])
{
	int f1 = 0, f2 = 0;

	if (argc == 3)
	{
	f1 = _atoi(argv[1]);
	f2 = _atoi(argv[2]);
	printf("%d\n", f1 * f2);
	}
	else 
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
