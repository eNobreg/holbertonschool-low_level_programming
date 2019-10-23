#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * op_add - Returns the sum of two ints
 * @a: Val 1 to add
 * @b: Val 2 to add
 * Return: A + B
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two ints
 * @a: Val 1 to sub
 * @b: Val 2 to sub
 * Return: A - B
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the result of two ints
 * @a: Val 1 to multiply
 * @b: Val 2 to multiply
 * Return: A * B
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two ints
 * @a: Val 1 to divide
 * @b: Val 2 to divide
 * Return: A / B
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the difference between two ints
 * @a: Val 1 to mod
 * @b: Val 2 to mod
 * Return: A % B
 */

int op_mod(int a, int b)
{
	return (a % b);
}

