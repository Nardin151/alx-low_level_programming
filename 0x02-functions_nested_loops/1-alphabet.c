#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description:Write a function that prints the alphabet,
 * in lowercase, followed by
 * new line.
 * Return: 0 = Success
 * print_alphabet() - prints the alphabet in lowercase
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
