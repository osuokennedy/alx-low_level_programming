#include "main.h"
/**
 *int _islower - checks for lowercase characters.
 *@c: single character input
 *Return: 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
