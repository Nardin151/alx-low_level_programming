#include <stdio.h>
#include "main.h"
/**
 * rot13 -  function that encodes a string using rot13.
 * @x: string of chars
 * Return: a string of chars encoded into rot13
 **/
char *rot13(char *x)
{
int c;
int c2;
char *ALPHA = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *alpha = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (c = 0 ; x[c] != '\0' ; c++)
{
for (c2 = 0 ; c2 < 52 ; c2++)
{
if (x[c] == ALPHA[c2])
{
x[c] = alpha[c2];
break;
}
}
}
return (x);
}
