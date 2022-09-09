#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print combination of numbers 0 - 9'
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int m, k;

	m = 0;
	k = 0;
	while (m < 10)
	{
		while (k < 10)
		{
			putchar(m);
			putchar(k);
			if (m < 9 && k < 9)
			{
				putchar(',');
				putchar(' ');
			}
			k++;
		}
		m++;
	}

	putchar('\n');
	return (0);
}
