#include "main.h"
#include <stdio.h>

/**
 * _strlen - return the lenght of a string
 * @s: string pointer
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	count++;
	return (count);
}
