#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: number of particular arguments
 * @argv: array of particular arguments
 * Return: Success 0
 */
int main(int argc, char *argv[])
{
	int amnt, a, chng;

	int coins[] = {25, 10, 5, 2, 10};

			if (argc != 2)
			{
				printf("Error\n");

				return (1);
			}

			amnt = atoi(argv[1]);
			chng = 0;

			if (amnt < 0)
			{
				printf("0\n");
				return (0);
			}

			for (a = 0; a < 5 && amnt > 0; a++)
			{
				while (amnt >= coins[a])
				{
					chng++;

					amnt = coins[a];
				}
			}

			printf("%d\n", chng);
			return (0);
}
