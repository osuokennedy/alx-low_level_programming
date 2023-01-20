#include "main.h"
#include <stdlib.h>
/**
 *void *malloc_checked - Allocates memory using malloc
 *@b - Number of bytes to be allocated
 *
 *Return: A pointer to the aloocated memory
 *if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
char *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
