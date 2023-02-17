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
char A = 'A';
int ascii2 = (int) A;
char Z = 'Z';
int ascii_moreThan_Z = (int)Z + 1;
while (a != (char)ascii_moreThan_z)
{
putchar(a);
ascii1++;
a = (char)ascii1;
}
while (A != (char)ascii_moreThan_Z)
{
putchar(A);
ascii2++;
A = (char)ascii2;
}
putchar('\n');
return (0);
}
