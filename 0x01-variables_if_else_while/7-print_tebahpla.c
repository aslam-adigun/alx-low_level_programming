#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print letters of the alphabet in reverse'
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char alp[26] = "zyxwvutsrqponmlkjihgfedcba";
	int m;

	for (m = 0; m < 26; m++)
	{
		putchar(alp[m]);
	}

	putchar('\n');
	return (0);
}
