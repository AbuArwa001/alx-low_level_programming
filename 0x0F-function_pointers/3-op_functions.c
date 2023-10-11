#include "3-calc.h"
/**
 * op_add - adds two ints
 * @a: first int
 * @b: second int
 * Return: retuns sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substarcts two ints
 * @a: fisrt int to be used
 * @b: second int to be used
 * Return: returns the difference of the two
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - rmultiplys two ints
 * @a: fisrt int for operatio
 * @b: second int for the operation
 * Return: returns the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two ints
 * @a: numerator of the operation
 * @b: denominator of the operation
 * Return: returns the divison of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - calculates the remainder
 * @a: numerator of the operation
 * @b: denominator of the operation
 * Return: returns the remainder of division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
