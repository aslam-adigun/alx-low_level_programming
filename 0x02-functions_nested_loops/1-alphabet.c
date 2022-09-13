#include "main.h"

/**
 * print_alphabet - Print alphabets and add a new line
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int m;

	for (m = 97; m <= 122; m++)

	{
		_putchar(m);
	}
	_putchar('\n');
}
