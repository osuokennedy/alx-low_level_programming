#include "main.h"

/**
 *_isalpha - Checks for alphabetic character.
 *@c: Return a single input letter
 *Return: 1 if character is a letter, lowercase or uppercase, 0 if otherwise
 */
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
return (1);
else
return (0);
}
