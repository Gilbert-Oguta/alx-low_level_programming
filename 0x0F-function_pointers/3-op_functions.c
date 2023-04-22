#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - add two integers
 * @a: first integer
 * @b: second integer
 * Return: add totall
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two integers
 * @a: fist integer
 * @b: second integer
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: multiples
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: divisibles
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - it calculates the module of the two integers
 * @a: first integer
 * @b:second integer
 * Return: the remainder of division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
