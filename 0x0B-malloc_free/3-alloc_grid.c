#include "main.h"



/**
* alloc_grid - returns a pointer to a
*2 dimensional array of integers.
*@width: width oàf array
*@height: height of array
*
*Return: pointer to the array
*/

int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, j;

	if (width == 0 || height == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for (; i < height; i++)
		{
			array[i] = (int *) malloc(sizeof(int) * width);
			if (array[i] != NULL)
