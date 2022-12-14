#include "main.h"
/**
 *print_last_digit - Prints the last digits
 *@value: The return
 *Return: Always a success value
 */
int print_last_digit(int value)
{
int var;

var = value % 10;
if (value < 0)
{
var *= -1;
}
_putchar('0' + var);
return (var);
}
