#include <stdio.h>
/**
 * main- Entry point , prints that alphabet in lower and upper case
 * Return: 0 (Success);
 **/
int main(void)
{
int a = '0';
int b = '1';
int f = '2';
int c = 0;
int e = 1;
int g = 2;
while (c < 10)
{
while (e < 10)
{
while (g < 10)
{
if ((g > e) & (e > c))
{
putchar(a);
putchar(b);
putchar(f);
if ((g == 9) & (e == 8) & (c == 7))
putchar('\n');
else
{
putchar(',');
putchar(' ');
}
}
f++;
g++;
}
f = '0';
g = 0;
e++;
b++;
}
e = 0;
b = '0';
c++;
a++;
}
return (0);
}

