#include <stdio.h>
#include "main.h"
/**
 * _islower - checks if the letter is lowercase or not
 * Return: 0 = Success
 * checks for lowercase character.
 * @c: character compared
 **/
int _islower(int c);
int _islower(int c)
{
if ((c >= 97) & (c <= 122))
return (1);
else
return (0);
}
