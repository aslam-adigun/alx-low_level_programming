#include "main.h"
#include <stdio.h>

/**
 * puts2 - reverse a string
 * @str: string pointer
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
}
