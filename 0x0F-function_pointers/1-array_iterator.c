#include<stdio.h>
#include "function_pointers.h"

/**
 ** array_iterator - executes fxn given as a perimeter
 ** @array: the array
 ** @size: size of array
 ** @action: pointer to function to be executed
 ** Return: Nothing
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
