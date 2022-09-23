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
printf("Size of char: %d bytes\n", sizeof(char));
printf("Size of int: %d bytes\n", sizeof(int));
printf("Size of long int: %d bytes\n", sizeof(long int));
printf("Size of long long int: %d bytes\n", sizeof(long long int));
printf("size of float: %d bytes\n", sizeof(float));
return (0);

}