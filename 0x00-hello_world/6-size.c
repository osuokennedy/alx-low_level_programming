#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: "sizeof evaluates the size of a variable"
 *
 *Return: Always 0 (success)
 */
int main(void)
{
printf("Size of char: %zu bytes\n", sizeof(char));
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of long int: %zu bytes\n", sizeof(long int));
printf("Size of long long int: %zu bytes\n", sizeof(long long int));
printf("size of float: %zu bytes\n", sizeof(float));
return (0);

}
