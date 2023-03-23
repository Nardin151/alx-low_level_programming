#include <stdio.h>
#include "main.h"
/**
 * is_palindrome - checks if a string is palindorme
 * @s: string of char
 * Return: 1 if a string is a palindrome and 0 if not.
 **/
int is_palindrome(char *s)
{
return (Palindorm(0, get_size(s, 0) - 1, s));
}
/**
 * Palindorm - checks if a string is palindorme
 * @s: string of char
 * @start: 0
 * @end: length -1
 * Return: 1 if a string is a palindrome and 0 if not
 **/
int Palindorm(int start, int end, char *s)
{
if ((s[start] == s[end]) & (start == end))
return (1);
if ((s[start] == s[end]) & (start == end - 1))
return (1);
if (s[start] == s[end])
return (Palindorm(start + 1, end - 1, s));
return (0);
}
/**
 * get_size - gets the size of string
 * @s: string
 * @inc: 0
 * Return: size
 **/
int get_size(char *s, int inc)
{
if (s[inc] == '\0')
return (inc);
return (get_size(s, inc + 1));
}
