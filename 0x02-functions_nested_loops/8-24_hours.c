#include "main.h"

/**
 *jack_bauer - Function that print every minute of 24 hours
 *h = hours, m = minutes
 * /10 allow second digit to rotate
 *Return: 24 hour clock line by line
 *for loop breaks before passing 24
 */

void jack_bauer(void)
{
int h;
int m;

for (h = 0; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n');
}
}
}
