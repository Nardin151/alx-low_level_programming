#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - a function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * @a: 2d array
 * @size: the sie of the array
 **/
void print_diagsums(int *a, int size)
{
int counter;
int counter2 = size - 1;
int firstDiag = 0;
int secondDiag = 0;
for (counter = 0 ; counter < size * size ;)
{
firstDiag += a[counter];
secondDiag += a[counter2];
counter = counter + size + 1;
counter2 += size - 1;
}
counter = size - 1;
while (counter2 < size)
{
secondDiag += a[counter];
counter += size - 1;
counter2++;
}
printf("%d, %d\n", firstDiag, secondDiag);
}
