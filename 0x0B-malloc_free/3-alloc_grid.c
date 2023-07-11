#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - nested loop to make grid
* @width: width input
* @height: height input
* Return: pointer to 2 dim. array
*/
int **alloc_grid(int width, int height)
{
	int **me;
	int j;
	int k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	me = malloc(sizeof(int *) * height);
	if (me == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		me[j] = malloc(sizeof(int) * width);
		if (me[j] == NULL)
		{
			for (; j >= 0; j--)
				free(me[j]);
			free(me);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			me[j][k] = 0;
	}
	return (me);
}
