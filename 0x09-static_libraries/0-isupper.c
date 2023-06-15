#include "main.h"
/**
 * _isupper -  change from lower case to upper case
 * @c: Lower case Charater
 * Return: letter in upper case
 **/
int _isupper(int c)
{
if ((c >= 97) & (c <= 122))
c = c - 32;
return (c);
}
