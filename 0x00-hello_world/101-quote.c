#include<stdio.h>
#include<string.h>
/**
 * main - Entry point
 *
 * Return: String (1) Success
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(1, str, strlen(str));
	return (0);
}
