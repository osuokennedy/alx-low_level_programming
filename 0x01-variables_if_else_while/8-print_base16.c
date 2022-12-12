#include <stdio.h>
/**
 * main - Entry
 * Return: positive number
 *
 */
int main(void)
{
	int Alpha;

	for (Alpha = 48; Alpha <= 57; Alpha++)
		putchar(Alpha);
	for (Alpha = 97; Alpha <= 102; Alpha++)
		putchar(Alpha);
	putchar('\n');
	return (0);
}
