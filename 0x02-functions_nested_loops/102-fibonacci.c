#include <stdio.h>
/**
 * main - entry point
 * Return: 0 = Success
 **/
int main(void)
{
long int a = 1;
long int b = 1;
long int sum = 0;
int n = 0;
printf("%ld, ", b);
while (n <= 99)
{
sum = a + b;
if (n < 99)
printf("%ld, ", sum);
else
printf("%ld", sum);
a = b;
b = sum;
n++;
}
return (0);
}
