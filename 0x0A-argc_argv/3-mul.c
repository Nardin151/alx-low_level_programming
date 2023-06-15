#include <stdio.h>
#include <stdlib.h>
/**
 * main -  a program that multiplies two numbers.
 * @argc: the number of arguemnts
 * @argv: the arguemnts as an array of strings
 * Return: 0 on Success
 **/
int main(int argc, char *argv[])
{
int mult = 0;
if (argc < 2)
{
printf("Error\n");
return (1);
}
else
{
int a = atoi(argv[2]);
int b = atoi(argv[1]);
mult = a * b;
printf("%d\n", mult);
return (0);
}
}
