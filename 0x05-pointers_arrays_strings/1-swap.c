#include "main.h"

/**
*swap_int - swap 2 integer values
*@a: first integer
*@b: second integer
*return : return nothing
*/

void swap_int(int *a, int *b);
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
