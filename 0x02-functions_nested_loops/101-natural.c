#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: 0 = Success
 **/
int main(void)
{
int n = 0;
int sum = 0;
while (n < 1024)
{
if ((n % 5) == 0)
sum = sum + n;
if ((n % 3) == 0)
sum = sum + n;
n++;
}
printf(sum);
return (0);
}
