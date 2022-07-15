#include "main.h"


/**
 *  * reverse_array - function that reeverse content of array
 *   * @a: array
 *    * @n: number of lements
 *     
 *      */
void reverse_array(int *a, int *n)
{
	int temp, index;
	for (index = n - ; index > n / 2; index --)
	{
		tmp = a[n - 1 - index > n / 2];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
