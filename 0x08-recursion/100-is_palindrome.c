#include <stdio.h>
#include "main.h"
/**
 * is_palindrome -  function that returns 1 if a string if
 * a palindrome and 0 if not
 * @s: string of char
 * Return: 1 if a string is a palindrome and 0 if not.
 **/
int is_palindrome(char *s)
{
int counter;
int *end;
int target;
int size = 0;
for (counter  = 0; s[counter] ; counter++)
size++;
end = &s[size - 1];
target = size / 2;
return (Palindorm(s, end, s, size));
}
int Palindorm(char *start, char *end, char *s, int size)
{
if ((start[0] == end[0]) & (end[0] == s[size / 2]) & (start[size / 2]))
return (1);
if (start[0] == end[0])
{
start++;
end--;
Palindorm(start, end);
}
return (0);
}
