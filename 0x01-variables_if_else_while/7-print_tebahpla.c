#include <stdio.h>
/**
 * main- Entry point , prints that alphabet in lower and upper case
 * Return: 0 (Success);
 **/
int main(void)
{
char z = 'z';
int ascii_z = (int)z;
char a = 'a';
int ascii_moreThan_a = (int)a - 1;
while (z != (char)ascii_moreThan_a)
{
putchar(z);
ascii_z--;
z = (char)ascii_z;
}
return (0);
}
