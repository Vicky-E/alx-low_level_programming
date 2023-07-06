#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - adds two integer
 * @a: integer
 * @b: integer
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
/**
 * op_sub - calculates difference between two integers
 * @a: integer
 * @b: integer
 * Return: diff
 */
int op_sub(int a, int b)
{
	int diff;

	diff = a - b;
	return (diff);
}
/**
 * op_mul - multiplies two integer
 * @a: integer
 * @b: integer
 * Return: mul
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}
/**
 * op_div - division function
 * @a: dividend
 * @b: divisor
 * Return: div
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}
/**
 * op_mod - performs modulo operation
 * @a: integer
 * @b: integer
 * Return: mod
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
