#include "main.h"

/**
 *swap_int - Swaps the values of two integers
 *@a: input first integer
 *@b: input second integer
 */

void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
