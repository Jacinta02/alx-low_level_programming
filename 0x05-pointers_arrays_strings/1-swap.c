#include "main.h"

/**
 * swap_int - swap values
 * @a: data to be swaped
 * @b: data to be swaped
 * Return:0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
