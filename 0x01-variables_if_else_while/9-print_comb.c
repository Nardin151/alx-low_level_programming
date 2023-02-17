#include <stdio.h>
/**
 * main- Entry point , prints that alphabet in lower and upper case
 * Return: 0 (Success);
 **/
int main(void)
{
int a = '0';
int b = 0;
while (b < 9)
{
putchar(a);
putchar(',');
putchar(' ');
a++;
b++;
}
putchar('9');
return (0);
}
