#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 * Return: pointer to dual_array (Success), NULL (Error)
 **/

int **alloc_grid(int width, int height)
{
	int **dual_array;
	int farray, sarray;

	if (height <= 0 || width <= 0)
		return (NULL);

	dual_array = (int **) malloc(sizeof(int *) * height);

	if (dual_array == NULL)
		return (NULL);

	for (farray = 0; farray < height; farray++)
	{
		dual_array[farray] = (int *) malloc(sizeof(int) * width);
		if (dual_array[farray] == NULL)
		{
			free(dual_array);
			for (sarray = 0; sarray <= farray; sarray++)
				free(dual_array[sarray]);
			return (NULL);
		}
	}

	for (farray = 0; farray < height; farray++)
	{
		for (sarray = 0; sarray < width; sarray++)
		{
			dual_array[farray][sarray] = 0;
		}
	}
	return (dual_array);
}
