#include <stdio.h>
/**
 *swap_int -Swaps the value of two integer
 *@a: first integer
 *@b: second integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
