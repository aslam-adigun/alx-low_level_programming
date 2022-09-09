#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print all the numbers of base 16 in lowercase'
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char alp[16] = "0123456789abcdef";
	int m;

	for (m = 0; m < 16; m++)
	{
		putchar(alp[m]);
	}

	putchar('\n');
	return (0);
}
