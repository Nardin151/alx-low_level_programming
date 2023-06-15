#include <stdio.h>
/**
 * main - print the number of argument
 * Return: 0 on success
 * @argc: number of argument passed to main
 * @argv: values based as a string of arguemnts
 **/
int main(int argc, __attribute__((unused)) char *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
