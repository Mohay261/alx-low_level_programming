#include "main.h"
/**
 * 1-swap.c - swaps the value of two variable
 * 
 * 
 */
void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
