#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the n element of an array
 * @a: string pointer 1
 * @n: string pointer 2
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
