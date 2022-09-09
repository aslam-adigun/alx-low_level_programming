#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print combinations of 3 numbers'
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

	int i, e, o;

	i = 48;
	e = 48;
	o = 48;

	while (o < 58)
	{
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
		o++;
	}

	putchar('\n');
	return (0);

}
