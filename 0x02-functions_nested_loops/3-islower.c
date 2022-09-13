#include "main.h"

/**
 * _islower - Print alphabets ten times and add a new line
 *
 * @c: variable to be checked
 *
 * Return: Always 0 (success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		_putchar(1);
	}
	else
		_putchar(0);
}
