#include "main.h"
/**
 * _pow_recursion - print power of a number
 * @x: Base number
 * @y: The exponent
 * Return: x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
