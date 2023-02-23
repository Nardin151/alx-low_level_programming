#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: 0 = success
 **/
int main(void)
{
int i = 1;
while (i <= 99)
{
if ((i % 3 == 0) & (i % 5 != 0))
printf("Fizz ");
else if ((i % 5 == 0) & (i % 3 != 0))
printf("Buzz ");
else if ((i % 3 == 0) & (i % 5 == 0))
printf("FizzBuzz ");
else
printf("%d ", i);
i++;
}
printf("Buzz");
printf("\n");
return (0);
}
