#include "main.h"
#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = 50, f1 = 0, f2 = 1, i, next;

	for (i = 1; i < n; i++)
	{
		printf("%d ", f2);
		next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
	return (0);
}
