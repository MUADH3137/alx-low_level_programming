#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: First Integer
 * @b: Second Integer
 */
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
