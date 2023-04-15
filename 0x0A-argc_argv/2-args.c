#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number of particular argumrnts
 * @argv: array of particular arguments
 * Return: Success 0
 */
int main(int argc, char *argv[])
{
	int y;

	for (y = 0; y < argc; y++)
	{
		printf("%s\n", argv[y]);
	}
	return (0);
}
