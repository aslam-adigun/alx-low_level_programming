#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print combination of 2 numbers'
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

	int i, e;

	i = 48;
	e = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
	}

	putchar('\n');
	return (0);

}
