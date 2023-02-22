#include <stdio.h>
/**
 * main - entry point
 * Return: 0 = Success
 **/
int main(void)
{
int a = 0;
int b = 1;
int sum = 0;
printf("%d, ", a);
printf("%d, ", b);
int n = 0;
while (n <= 98)
{
sum = a + b;
if (n != 98);
printf("%d, ", sum);
else
printf("%d", sum);
a = b;
b = sum;
n++;
}
return (0);
}
