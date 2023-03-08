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
int L = stringSize(s);
return (Palindorme(s,0,L));
}
int stringSize(char *s)
{
int counter;
int size = 0
for (counter = 0 ; s[counter] != '\0' ; counter++)
size ++;
return (size);
}
int Palindorme(char s,int start,int end)
{
if (s[strat] != s[end - 1])
return (0);
if (start == 1)
return (1);
return (Palindorme(s, start + 1, end - 1);
}

