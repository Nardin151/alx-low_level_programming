#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- Entry point , prints that alphabet in lower and upper case
 * Return: 0 (Success);
 **/
int main(void)
{
int a = '0';
int b = '1';
int c = 0;
int e = 1;
while (c < 10)
{
while (e < 10)
{

if (e > c)
{
putchar(a);
putchar(b);
if ((e == 9) & (c == 8))
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
b++;
e++;
}
e = 0;
b = '0';
a++;
c++;
}
return (0);
}

