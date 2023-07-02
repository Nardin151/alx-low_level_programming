#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * argstostr -  a function that concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: value of all the arguemnts as an array of str
 * Return: a function that concatenates all the arguments of your program.
 **/
char *argstostr(int ac, char **av)
{
int i = 0;
unsigned int j = 0;
int s = 0;
char *Str;
while (i < ac)
{
s += strlen(av[i]);
s++;
i++;
}
i = 0;
printf("%d",s);
Str = malloc(sizeof(char) * s);
while (i < s)
{
j = 0;
while (j < strlen(av[i]))
{
Str[i + j] = av[i][j];
j++;
}
Str[i + j + 1] = '\n';
i = i + j;
}
return (Str);
}
