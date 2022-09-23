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
printf("Size of a char: %d bytes\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("size of a float: %d byte(s)\n", sizeof(float));
return (0);

}
