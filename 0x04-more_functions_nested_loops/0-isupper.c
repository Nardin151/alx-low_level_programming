#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: the character that we will check
 * Return: 1 = uppercase , 0 = otherwise
 **/
int _isupper(int c)
{
if ((c <= 90) & (c >= 65))
return (1);
else
return (0);
}
