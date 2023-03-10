#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: the number of inputs provided by th command line
 * @argv: the value of each input as a string of chars
 * Return: 0 = success
 **/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
