#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print letters of the alphabet excluding e & q'
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char alp[24] = "abcdfghijklmnoprstuvwxyz";
	int m;

	for (m = 0; m < 24; m++)
	{
		putchar(alp[m]);
	}

	putchar('\n');
	return (0);
}
