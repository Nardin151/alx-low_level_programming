#include <stdio.h>
/**
 * main- Entry point , prints that alphabet in lower and upper case
 * Return: 0 (Success);
 **/

int main(void)
{
char a = 'a';
int ascii1 = (int) a;
char z = 'z';
int ascii_moreThan_z = (int)z + 1;
while (a != (char)ascii_moreThan_z)
{
if (a == 'q')
{
a = 'r';
ascii1++;
}
else if (a == 'e')
{
a = 'f';
ascii1++;
}
else
{
putchar(a);
ascii1++;
a = (char)ascii1;
}
}
putchar('\n');
return (0);
}
