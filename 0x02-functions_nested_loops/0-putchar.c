#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: Print _putchar with a new line
 *
 * Return: 0 Always success
 */

int main(void)

{
	char put[8] = "_putchar";
	int m;

	for (m = 0; m < 8; m++)

	{
		putchar(put[m]);
	}
	putchar('\n');
	return (0);
}
