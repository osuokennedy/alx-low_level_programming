#include <stdio.h>
/**
 *main: - Entry point
 *
 *Description: "sizeof evaluates the size of a variable"
 *
 *Return: Always 0 (success)
 */
int main(void)
{
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of double: %zu bytes\n", sizeof(doubleType));
printf("Size of char: %zu bytes\n", sizeof(charType));

return (0);
}
