#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main -  a program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: the number of inputs
 * @argv: the values as string of chars
 * Return: 0 = success
 **/
int main(int argc, char *argv[])
{
int arr[5] = {25, 10, 5, 2, 1};
int pointer;
int number_of_coins = 0;
int sum = 0;
if ((argc == 1) || (atoi(argv[1]) < 0))
{
printf("Error\n");
return (1);
}
else
{
for (pointer =  0 ; pointer < 5 ; pointer++)
{
if (atoi(argv[1]) / arr[pointer] > 0 && sum != atoi(argv[1]))
{
while (sum <= atoi(argv[1]))
{
sum += arr[pointer];
number_of_coins++;
}
number_of_coins--;
sum -= arr[pointer];
}
}
printf("%d\n", number_of_coins);
return (0);
}
}
