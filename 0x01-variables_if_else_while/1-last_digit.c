#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Assign a random number to variable n each it is executed
 * Return: Always 0
 */
int main(void)
{
int n;
int a;
srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10;
if (a > 5)
{
printf("Last digit of % d is % d and greater than 5\n ", n, a);
}
else if (a == 0)
{
printf("Last digit of % d is % d and is 0\n", n, a);
}
else
{
printf("Last digit of % d is % d and is less than 6 and is not 0\n", n, a);
}
return (0);
}
