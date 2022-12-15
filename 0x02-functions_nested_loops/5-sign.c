#include "main.h"

/**
 *print_sign - Prints the sigh of a number
 *@n: input number
 *Return: 1 prints '+' if n > 0, 0 prints '0' if n = 0, -1 prints '-' if n < 0
*/

int print_sign(int n)
{
if (n >= '0')
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar('+');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
