#include <stdio.h>
/**
 * main- Entry point , prints that alphabet in lower and upper case
 * Return: 0 (Success);
 **/
int main(void)
{
int a = '0';
int b = 0;
while (b < 10)
{
putchar(a);
if (a == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
a++;
b++;
}
return (0);
