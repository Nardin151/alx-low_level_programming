#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - a function that returns the value of x
 * raised to the power of y
 * @x: the number that we will raise the power to
 * @y: the power of x
 * Return: the result of the x power y
 **/
int _pow_recursion(int x, int y)
{
if (y == 1)
return (x);
if (y == 0)
return (1);
if (y < 0)
return (-1);
return (x *  _pow_recursion(x, y - 1));
}
