#include "main.h"
#include <stdio.h>

/**
 * print_array - print the n element of an array
 * @a: pointer 1
 * @n: pointer 2
 * Return: no return
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
