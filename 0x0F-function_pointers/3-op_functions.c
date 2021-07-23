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
	return(a + b);
}

/**
 * op_add - Op to add two integer
 *
 * @a: number to add
 * @b: number to add
 * Return: integer with result
 */
int op_sub(int a, int b)
{
	return(a - b);
}

/**
 * op_add - Op to add two integer
 *
 * @a: number to add
 * @b: number to add
 * Return: integer with result
 */
int op_mul(int a, int b)
{
	return(a * b);
}

/**
 * op_add - Op to add two integer
 *
 * @a: number to add
 * @b: number to add
 * Return: integer with result
 */
int op_div(int a, int b)
{
	if(b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return(a / b);
}

/**
 * op_add - Op to add two integer
 *
 * @a: number to add
 * @b: number to add
 * Return: integer with result
 */
int op_mod(int a, int b)
{
	if(b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return(a % b);
}