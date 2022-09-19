#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout
 * @str: string pointer
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
