#include "main.h"
#include <stdio.h>
/**
 * main - program that multiplies two numbers
 * @argc: number of particular arguments
 * @argv: array that contains particular arguments
 * Return: Success 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
