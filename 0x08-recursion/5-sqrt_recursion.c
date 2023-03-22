#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion -  function that returns the natural
 * square root of a number.
 * @n: the number that we will find the sqrt for
 * Return: the natural sqrt
 **/
int _sqrt_recursion(int n)
{
_sqrt(n, 1);
}
/**
 * _sqrt- function that finds the sqrt of the number n
 * @n: the number we are finding the sqrt of
 * @m: seed
 * Return: the square root if found
 **/
int _sqrt(int n, int m)
{
if (m < 0)
return (-1);
if (m * m == n)
return (m);
if (m * m > n)
return (-1);
return (_sqrt(n, m + 1));
}
