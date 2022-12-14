#include "main.h"
/**
 *print_alphabet_x10 - printing the alphabets 10 times
 *Return: *10 lowercase alphabet
 */
void print_alphabet_x10(void)
{
int n, c;
c = 0;
while (c < 10)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
c++;
_putchar('\n');
}
}
