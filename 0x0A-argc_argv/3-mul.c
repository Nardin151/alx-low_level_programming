#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that multiplies two numbers.
 * @argc: the number of inputs provided by the command line
 * @argv: the value of the inputs as a string of char
 * Return: 0 = success
 **/
int main(int argc, char *argv[])
{
int e;
int i = 1;
if (argc > 1)
{
for (e = 1 ; e < argc ; e++)
i *= atoi(argv[e]);
printf("%d\n", i);
}
else
printf("Error \n");
return (0);
}
