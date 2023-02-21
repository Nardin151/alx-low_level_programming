#include <stdio.h>
/**
 * main - Entry point
 * Description:Write a function that prints the alphabet,
 * in lowercase, followed by
 * new line.
 * Return: 0 = Success
 **/
void print_alphabet(void);
int main(void)
{
print_alphabet();
return (0);
}
/**
 * print_alphabet - print the alphabet
 **/
void print_alphabet(void)
{
char a = 'a';
int Ascii_a = (int) a;
while (a != ((int)'z' + 1))
{
putchar(a);
a++;
}
}
