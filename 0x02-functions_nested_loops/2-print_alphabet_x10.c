#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 = Success
 **/
/**
 * void print_alphabet_x10 - print the alphabet 10 times in lower
 *case
 **/
void print_alphabet_x10(void)
{
char a = 'a';
int i = 0;
while (i != 10)
{
while (a != ((int)'z' + 1))
{
putchar(a);
a++;
}
putchar('\n');
i++;
}
}
