#include "3-calc.h"

/**
 * op_add -  returns the sum of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b, the result
 */
int op_add(int a, int b)
{
	int result;

	result = (a + b);
	return (result);
}

/**
 * op_sub - returns the difference of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: a minus b, esp if a is larger
 */
int op_sub(int a, int b)
{
	int result;

	result = (a - b);
	return (result);
}

/**
 * op_mul - returns the product of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: a multiplied by b
 */
int op_mul(int a, int b)
{
	int result;

	result = (a * b);
	return (result);
}

/**
 * p_div - returns the result of the division of a by b
 * @a: numerator
 * @b: denominator
 *
 * Return: a divded by b, the result
 */
int op_div(int a, int b)
{
	int result;

	result = (a / b);
	return (result);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: numerator
 * @b: denominator
 *
 * Return: modulo result
 */
int op_mod(int a, int b)
{
	int result;

	result = (a % b);
	return (result);
}
