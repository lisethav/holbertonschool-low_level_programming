#include "function_pointers.h"
/**
  * array_iterator - function that executes a function given as a parameter
  *
  * @array: array
  * @size: long
  * @action: fuction
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j = -1;

	if (array && action)
	{
		while (++j < size)
		{
			action(array[j]);
		}
	}
}
