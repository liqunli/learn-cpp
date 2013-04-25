#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include "qsort.h"

//implementation of bubble sort in a recursive way
void my_bubblesort(int* array, int len)
{
	//break if there is only one element
	if( len == 1 )
	{
		return;
	}
	//travel the array to make sure that the largest element arrives the end
	for(int i = 0; i < len - 2; ++i)
	{
		if(array[i] > array[i+1])
		{
			swap(array, i, i+1);
		}
	}	
	//deal with a smaller problem
	my_bubblesort(array, len - 1);	
}

//implementation of bubble sort in an unrecursive way
void my_bubblesort2(int* array, int len)
{
	//do exactly the same task as explained
	for(int i = len; i > 1; --i)
	{
		for(int j = 0; j < i - 2; ++j)
		{
			if(array[j] > array[j+1])
			{
				swap(array, j, j + 1);
			}
		}
	}
}

#endif
