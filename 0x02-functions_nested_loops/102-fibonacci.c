#include "main.h"
#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a = 1;
	int b = 1;

	while (a <= 50)
	{
		printf("%d, ", b);
		b = b + b;
		a++;
	}
	printf("\n");
	return (0);
}
