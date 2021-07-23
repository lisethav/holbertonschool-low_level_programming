#include "3-calc.h"

/**
 * op_add - Op to add two integer
 *
 * @a: number to add
 * @b: number to add
 * Return: integer with result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Op to rest two integer
 *
 * @a: number to rest
 * @b: number to rest
 * Return: integer with result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Op to multiplic two integer
 *
 * @a: number to mult
 * @b: number to mult
 * Return: integer with result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Op to division two integer
 *
 * @a: number to div
 * @b: number to div
 * Return: integer with result
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
 * op_mod - Op to mod two integer
 *
 * @a: number to mod
 * @b: number to mod
 * Return: integer with result
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
