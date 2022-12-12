#include <stdio.h>
/**
 * main -  All possible combinations of single-digit numbers.
 * Return:
 *Return: Always 0
 */
int main(void)
{
	int Alpha;

	for (Alpha = 48; Alpha < 58; Alpha++)
	{
	putchar(Alpha);
	if (Alpha != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	return (0);
}
