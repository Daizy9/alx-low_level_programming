#include "main.h"

#include <stdio.h>
/**
 * * reverse_array - reverses an array
 * * @a: array to reverse
 * * @n: size of array
 **/
void print_array(int *a, int n)
{
	for (int i = 0; i < size/2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}
}
