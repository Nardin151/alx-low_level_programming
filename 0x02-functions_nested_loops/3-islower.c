#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: 0 = Success
 *_islower: checks for lowercase character.
 * c : character
 **/
int _islower(int c);
int _islower(int c)
{
if ((c >= 97) & (c<=122))
return (1);
else
return (0);
}
