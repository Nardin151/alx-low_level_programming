#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that adds positive numbers.
 * @argc: the number of arguments provided by the command line
 * @argv: the value of each argument in an array as a string of chars
 * Return: 0 = success
 **/
int main(int argc, char *argv[])
{
int sum = 0;
int counter2;
int counter;
int there_is_a_char = 0;
for (counter = 1 ; counter < argc ; counter++)
{
for (counter2 = 0 ; argv[counter][counter2] ; counter2++)
{
if ((argv[counter][counter2] >= '0') & (argv[counter][counter2] <= '9'))
{
sum += atoi(argv[counter]);
break;
}
else
{
there_is_a_char = 2;
break;
}
}
}
if ((there_is_a_char == 2) || (argc == 2))
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", sum);
return (0);
}
}
