#include <stdio.h>
#include "main.h"
/**
 * factorial -  a function that returns the factorial of a given number.
 * @n: the number that we will get the factroial for
 * Return: the factorial of the number n
 **/
int factorial(int n)
{
if (n == 1 || n == 0)
return (1);
if (n < 0)
return (-1);
return (n * factorial(n - 1));
}
