#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: the n bytes that we want to concatenate from s2
 * Return: new pointer to the concatenated string
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i  = 0;
unsigned int total = 0;
char *s3;
int index;
if (n > strlen(s2))
	n = strlen(s2);
s3 = malloc(sizeof(char) * (strlen(s1) + n));
total = n + strlen(s1);
while (i < total)
{
	if (i < strlen(s1))
		s3[i] = s1[i];
	else
	{
		index  = total - (n + i);
		if (index < 0)
			s3[i] = s2[-index];
		else
			s3[i] = s2[index];
	}
	i++;
}
return (s3);
}

