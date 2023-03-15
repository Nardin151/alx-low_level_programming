#include <stdio.h>
#include "main.h"
/**
 * _isdigit -  function that verifies if a  character is a digit or not
 * @c: char that we will check if int or not
 * Return: 1 - digit , 0 - not a digit
 **/
int _isdigit(int c)
{
if ((c >= 48) || (c <= 57))
return (1);
return (0);
}
