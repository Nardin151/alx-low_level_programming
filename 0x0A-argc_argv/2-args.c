#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints all arguments it receives.
 * @argc : the number of inputs provided by the command line
 * @argv: the value of inputs as string of chars
 * Return: 0 = success
 **/
int main(int argc, char *argv[])
{
int i;
for (i = 0 ; i < argc ; i++)
printf("%s\n", argv[i]);
return (0);
}
