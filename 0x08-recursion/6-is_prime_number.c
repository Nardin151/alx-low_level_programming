#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - a function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: the int we will check if prime or not
 * Return: 0 , 1
 **/
int is_prime_number(int n)
{
return (_prime(n, n - 1));
}
/**
 *_prime - a function that returns 1 if the input
 *integer is a prime number, otherwise return 0.
 * @n: the int we will check if prime or not
 * @dec: n - 1
 * Return: 0 , 1
 **/
int _prime(int n, int dec)
{
if (n < 0)
return (0);
if ((n % dec != 0) & (dec == 2))
return (1);
if (n % dec != 0)
return (_prime(n, dec - 1));
return (0);
}
