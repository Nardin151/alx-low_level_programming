#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- Entry point , prints that alphabet in lower and upper case
 * Return: 0 (Success);
 **/
int main(void)
{
int n;
int c;
srand(time(0));
n = rand() - RAND_MAX / 2;
c = n % 10;
if (c > 5)
{
printf("is %d and is greater than 5\n", c);
}
else if (c == 0)
{
printf("is %d and is 0\n", c);
}
else if (c < 6 & c != 0)
{
printf("is %d and is less than 6 and not 0\n", c);
}

return (0);
}

