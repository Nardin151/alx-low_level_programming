#include "main.h"
/**
 * is_prime_number - a function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: Number
 * Return: 1 for prime numbers and 0 for non-prime
 **/
int is_prime_number(int n)
{
return (Prime(n, 2));
}
/**
 * Prime - finds if a number is prime or not
 * @n: Number
 * @m: Counter
 * Return: 1 - prime , 0 - non prime
 **/
int Prime(int n, int m)
{
if (n == 1)
return (0);
else if (n < 1)
return (0);
else if ((n % m == 0) & (m == n))
return (1);
else if (n % m == 0)
return (0);
else
return (Prime(n, m + 1));
}
