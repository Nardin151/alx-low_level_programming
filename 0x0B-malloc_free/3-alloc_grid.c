#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: number of cols
 * @height: number of rows
 * Return: a new 2d array
 **/
int **alloc_grid(int width, int height)
{
int **Array = malloc(sizeof(int *) * height);
int i = 0;
int j = 0;
if ((width <= 0) | (height <= 0))
return (NULL);
if (Array == NULL)
return (NULL);
while (i < height)
{
Array[i] = malloc(sizeof(int) * width);
if (Array[i] == NULL)
return (NULL);
i++;
}
while (i < height)
{
while (j < width)
{
Array[i][j] = 0;
j++;
}
i++;
}
return (Array);
}
