#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print numbers 0 - 9'
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char num[10] = "0123456789";
	int m;

	for (m = 0; m < 10; m++)
	{
		putchar(num[m]);
	}

	putchar('\n');
	return (0);
}
