#include <stdio.h>
#include "main.h"
/**
 * main - a program that multiplies two numbers.
 * @argc: the number of inputs provided by the command line
 * @argv: the value of the inputs as a string of char
 * Return: 0 = success
 **/
int main(int argc, char *argv[])
{
int i = 1;
if (argc > 1)
{
for (i = 0 ; i < argc ; i++)
i *= _atoi(argv[i]);
printf("%d\n", i);
}
else
printf("Error \n");
return (0);
}
