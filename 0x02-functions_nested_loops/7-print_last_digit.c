#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @p: variable to be checked
 *
 * Return: Always 0 (success)
 */

int print_last_digit(int p)
{
	int n;

	n = p % n;
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
	_putchar('\n');
}
