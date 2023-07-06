#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - adds two integer
 * @a: integer
 * @b: integer
 * Return: 0 on sucess
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	printf("%d", sum);
	return (0);
}
/**
 * op_sub - calculates difference between two integers
 * @a: integer
 * @b: integer
 * Return: 0 on sucess else -1
 */
int op_sub(int a, int b)
{
	int diff;

	diff = a - b;
	printf("%d", diff);
	return (0);
}
/**
 * op_mul - multiplies two integer
 * @a: integer
 * @b: integer
 * Return: 0 on sucess
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	printf("%d", mul);
	return (0);
}
/**
 * op_div - division function
 * @a: dividend
 * @b: divisor
 * Return: 0 on sucess
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;
	printf("%d", div);
	return (0);
}
/**
 * op_mod - performs modulo operation
 * @a: integer
 * @b: integer
 * Return: 0 om sucess
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	printf("%d", mod);
	return (0);
}

