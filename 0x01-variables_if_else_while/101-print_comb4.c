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

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			o = 48;
			while (o < 58)
			{
				if (e < i && i < o)
				{
					putchar(e);
					putchar(i);
					putchar(o);
					if (i == 56 && e == 55 && o == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				o++;
			}
			i++;
		}
		e++;
	}

	putchar('\n');
	return (0);

}
