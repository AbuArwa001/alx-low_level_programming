#include "main.h"


/**
 * alloc_grid - allocates memory for array of integers
 * @width: width of the array
 * @height: heught of the array
 * Return: returns the pointer to array
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **gd  = NULL;

	if (width <= 0 || height <= 0)
	{

		return (NULL);
	}

	gd =  malloc(sizeof(int *) * height);

	if (gd == NULL)
	{
		return (NULL);
	}

	for (; i < height; i++)
	{
		gd[i] = malloc(sizeof(int) * width);

		if (gd[i] == NULL)
		{
			for (j = 0; j < i ; j++)
			{
				free(gd[i]);
			}

			free(gd);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			gd[i][j] = 0;
		}
	}

	return (gd);
}
