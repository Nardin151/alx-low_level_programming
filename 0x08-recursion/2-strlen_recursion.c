#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: String
 * Return:Lenght of the String
 **/
int _strlen_recursion(char *s)
{
if (s[0] == '\0')
return (0);
else
{
s++;
return (1 +  _strlen_recursion(s));
}
}
