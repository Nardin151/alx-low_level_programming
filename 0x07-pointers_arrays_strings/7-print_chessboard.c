#include <stdio.h>
#include "main.h"
/**
 * print_chessboard -  a function that prints the chessboard.
 * @a: 2d array
 **/
void print_chessboard(char (*a)[8])
{
int counter;
int counter2;
for (counter = 0 ; counter < 8 ; counter++)
{
for (counter2 = 0 ; counter2 < 8 ; counter2++)
{
if (a[counter][counter2] == ' ')
{
break;
}
else
_putchar(a[counter][counter2]);
}
_putchar('\n');
}
}
