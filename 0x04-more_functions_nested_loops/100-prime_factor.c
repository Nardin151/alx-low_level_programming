#include <stdio.h>
#include "main.h"
/**
 *main - a program that finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line
 *Return: 0 = success
 **/
int main (void)
{
long int the_number = 612852475143;
long int decrem = 1;
long int decrem_inner = 2;
long int largest_prime_num = 0;
long int counter = 1;
bool flag = true;
while (flag)
{
if (the_number % (the_number - decrem) == 0)
{
/*check if the number is  prime*/
while (decrem_inner <= (the_number - decrem))
{
if((the_number - decrem) % decrem_inner == 0)
counter++;
derecm_inner++;
}
if(counter == 1)
{
largets_prime_number = the_number - decrem;
flag = false;
}
}
}
printf("%ld", largets_prime_number)
}
