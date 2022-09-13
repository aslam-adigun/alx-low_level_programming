#include "main.h"

/**
 * _isalpha - show if character is a letter
 *
 * @c: variable to be checked
 *
 * Return: Always 0 (success)
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
