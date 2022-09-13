#include "main.h"

/**
 * print_alphabet - Print alphabets and add a new line
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int p = 0;

	while (p < 10)

	{
		int m;

		for (m = 97; m <= 122; m++)

		{
			_putchar(m);
		}
		_putchar('\n');
		p++;
	}
}
