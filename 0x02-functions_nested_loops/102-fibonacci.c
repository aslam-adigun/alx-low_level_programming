#include "main.h"
#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = 50, f1 = 0, f2 = 1, i;

	if (n < 1)
	{
		printf("%d ", f1);
		for (i = 1; i < n; i++)
		{
			printf("%d ", f2);
			int next = f1 + f2;

			f1 = f2;
			f2 = next;
		}
	}
}
