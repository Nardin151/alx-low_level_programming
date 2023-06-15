#include <stdio.h>
#include <stdlib.h>
/**
 * main -  a program that adds positive numbers.
 * @argc: the number of arguemnts
 * @argv: the arguments in an array os strings
 * Return: 0 on success
 **/
int main(int argc, char *argv[])
{
int b = 1;
int sum = 0;
if (argc == 1)
{
printf("%d\n", 0);
b = 0;
}
else
{
int i = 1;
while (i < argc)
{
char e = *argv[i];
if (((e >= 'a') & (e <= 'z')) | ((e >= 'A') & (e <= 'Z')))
{
printf("Error\n");
b = 0;
return (1);
break;
}
else
sum += atoi(argv[i]);
i++;
}
}
if (b)
printf("%d\n", sum);
return (0);
}
