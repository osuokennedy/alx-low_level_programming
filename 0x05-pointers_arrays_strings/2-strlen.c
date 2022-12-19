#include "main.h"

/**
 *_strlen - Returns the length of a string
 *@s: String
 *Return: length
 */

int _strlen(char *s)
{
int len;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
