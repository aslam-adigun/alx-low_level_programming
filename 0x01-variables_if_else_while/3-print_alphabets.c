#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print letters of the alphabet'
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int m;

	for (m = 0; m < 52; m++)
	{
		putchar(alp[m]);
	}

	putchar('\n');
	return (0);
}
