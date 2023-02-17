#include <stdio.h>
/**
 * main- Entry point , prints that alphabet
 * Return: 0 (Success);
 **/

int main(void)
{
char a = 'a';
int ascii = (int) a;
char z = 'z';
int ascii_moreThan_z = (int)z + 1;
while (a != (char)ascii_moreThan_z)
{
putchar(a);
ascii++;
a = (char)ascii;
}
putchar('\n');
return (0);
}
