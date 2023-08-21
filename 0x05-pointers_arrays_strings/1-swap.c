#include <stdio.h>

/**
 *swap_int -Swaps the value of two integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
