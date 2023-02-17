#include <stdio.h>
/**
 * main- Entry point , prints that alphabet in lower and upper case
 * Return: 0 (Success);
 **/
int main(void)
{
int a = '0';
int A = 'a';
int b = 0;
while (b < 10)
{
putchar(a);
a++;
b++;
}
b = 0;
while (b < 6)
{
putchar(A);
A++;
b++;
}
putchar('\n');
return (0);
}
