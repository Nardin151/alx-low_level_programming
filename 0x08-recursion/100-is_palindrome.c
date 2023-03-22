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
return (Palindorm(0, size - 1, s));
}
int Palindorm(int start, int end, char *s)
{
if (s[start] == s[end] & start == end )
return (1);
if (s[start] == s[end] & start == end - 1)
return (1);
if (s[start] != s[end])
return (0);
if (s[start] == s[end])
return (Palindorm(start + 1 , end - 1, s));
return (0);
}
