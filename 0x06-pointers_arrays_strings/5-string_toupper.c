#include <stdio.h>
#include "main.h"
/**
 * string_toupper - a function that capitalizes all words of a string.
 * @x: string of character
 * Return: string of chars in uppercase
 **/
char *string_toupper(char *x)
{
int counter;
int char_to_ascii;
char ascii_to_char;
for (counter = 0; x[counter] != '\0' ; counter++)
{
char_to_ascii = (int) x[counter];
if ((char_to_ascii >= 97) & (char_to_ascii <= 122))
{
char_to_ascii -= 32;
ascii_to_char = (char) char_to_ascii;
x[counter] = ascii_to_char;
}
}
return (x);
}
