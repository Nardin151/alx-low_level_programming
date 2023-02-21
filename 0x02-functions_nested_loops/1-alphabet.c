#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description:Write a function that prints the alphabet,
 * in lowercase, followed by
 * new line.
 * Return: 0 = Success
 **/
void print_alphabet(void)
{
char a = 'a';
while (a != ((int)'z' + 1))
{
putchar(a);
a++;
}
}
