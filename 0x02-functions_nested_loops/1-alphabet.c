#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet,
 * in lowercase, followed by
 * new line.
 * Return: 0 = Success
 * print_alphabet - prints the alphabet in lowercase
 **/
void print_alphabet(void)
{
char a = 'a';
while (a != ((int)'z' + 1))
{
putchar(a);
a++;
}
putchar('\n');
}
