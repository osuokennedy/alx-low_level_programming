#include "main.h"
/**
 *_puts - prints a string to stdout
 *@str: This is a parameter to _puts function
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar (*str);
}
_putchar ('\n');
}
