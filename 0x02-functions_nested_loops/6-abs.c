# include <stdio.h>
#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * Return: Success = 0
 * @int: computes the absolute value of the integer
 **/
int _abs(int);
int _abs(int x)
{
if (x < 0)
return (-x);
else
return (x);
}
