#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the value of 2 integers
 * @a: variable a to be swapped
 * @b: variable b to be swapped
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
