#include <stdio.h>
/**
 * main -  a program that prints all arguments it receives.
 * @argc: the number of agruments
 * @argv: the values of the arguments sent as an array of strings
 * Return: 0 on success
 **/
int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
