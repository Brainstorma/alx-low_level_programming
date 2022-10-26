#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 **/

void reverse_array(int *a, int n)
{
	int reva, dray;

	for (dray = n - 1; dray >= n / 2; dray--)
	{
		reva = a[n - 1 - dray];
		a[n - 1 - dray] = a[dray];
		a[dray] = reva;
	}
}
