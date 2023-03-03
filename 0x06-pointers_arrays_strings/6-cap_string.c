#include <stdio.h>
#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @x: string of chars
 * Return: the string of chars in uppercase
 **/
char *cap_string(char *x)
{
int count;
int char_to_ascii;
char ascii_to_char;
int s[13] = {'\n', ' ', ',', ';', '.'
, '!', '?', '"', '(', ')', '{', '}', '\t'};
int count2;
for (count = 0; x[count] != '\0' ; count++)
{
char_to_ascii = (int) x[count];
if ((char_to_ascii >= 97) & (char_to_ascii <= 122))
{
for (count2 = 0 ; count2 < 13 ; count2++)
{
if (((int)x[count - 1] == s[count2]) & (count != 0))
{
char_to_ascii -= 32;
ascii_to_char = (char) char_to_ascii;
x[count] = ascii_to_char;
}
}
}
}
return (x);
}
