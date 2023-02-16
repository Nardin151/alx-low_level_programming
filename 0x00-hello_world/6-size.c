#include <stdio.h>
/**
 * main - a C program that prints the size of various types
 * Return: 0(Success)
 **/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("Size of a char: %lu",(unsigned char)sizeof(a));
printf(" byte(s)\n");
printf("Size of an int: %lu",(unsigned int)sizeof(b));
printf(" byte(s)\n");
printf("Size of a long int: %lu",(unsigned long int)sizeof(c));
print("byte(s)\n");
printf("Size of a long long int: %lu",(unsigned long long int)sizeof(d));
printf(" byte(s)\n");
printf("Size of a float: %lu",(unsigned float)sizeof(e));
printf(" byte(s)\n");
}
