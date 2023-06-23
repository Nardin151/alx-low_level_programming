#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: the number of arguemnts
 * @argv: an array of strings that holds all the arguments
 * Return: 0 on Success
 **/
int main(int argc, char *argv[])
{
int v[5] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
int Target = atoi(argv[1]);
int temp = 0;
int i = 0;
int times = 0;
if (Target < 0)
printf("%d\n", 0);
else
{
while (temp != Target)
{
while (temp < Target)
{
times++;
temp += v[i];
}
if (temp > Target)
{
temp -= v[i];
times -= 1;
}
i++;
}
printf("%d\n", times);
}
}
return (0);
}
