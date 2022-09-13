#include "main.h"

/**
 * print_sign - show if a number is less, greater or = 0
 *
 * @n: variable to be checked
 *
 * Return: Always 0 (success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (0);
	}
	_putchar('\n');
}
