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
while (n <= 48)
{
sum = a + b;
if (n < 48)
printf("%ld, ", sum);
else
printf("%ld", sum);
a = b;
b = sum;
n++;
}
printf("\n");
return (0);
}
