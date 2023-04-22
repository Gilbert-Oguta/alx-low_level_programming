#include <stdlib.h>
#include <stdio.h>
/**
 * main - own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: NULL
 */
int main(int argc, char *argv[])
{
	char *op = (char *) main;
	int y, xbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	xbytes = atoi(argv[1]);

	if (xbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (y = 0; y < xbytes; y++)
	{
		printf("%02x", op[y] & 0xFF);
		if (y != xbytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
