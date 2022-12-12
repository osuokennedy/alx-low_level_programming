#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (Success)
 */
int main(void)
{
char Alpha;
Alpha = 'a';
while (Alpha <= 'z')
{
putchar(Alpha);
Alpha++;
}
putchar('\n');
return (0);
}
