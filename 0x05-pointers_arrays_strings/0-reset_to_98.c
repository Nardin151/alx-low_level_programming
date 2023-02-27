#include <stdio.h>
#include "main.h"
/**
 * reset_to_98 - function that takes a pointer to an int as
 * parameter and updates the value it points to to 98
 * @n : a number of type int
 **/
void reset_to_98(int *n)
{
int *p = n;
*p = 98;
}
