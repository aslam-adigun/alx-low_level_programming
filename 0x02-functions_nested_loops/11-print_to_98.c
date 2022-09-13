#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 *
 * @n: input number
 *
 * Return: Always 0 (success)
 */

void print_to_98(int n)

{

	if (n > 98)
	{
		for (; n > 98; n--)
		{
			_putchar(n);
			_putchar(44);
			_putchar(32);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			_putchar(n);
			_putchar(44);
			_putchar(32);
		}
	}
	_putchar('\n');
}
