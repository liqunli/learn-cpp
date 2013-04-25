#ifndef QSORT_H
#define QSORT_H

//swap two elements in an array
void swap(int* array, int i, int j)
{
	int tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
}

//the function has two index parameters left and right which are used for resursive calling
void my_qsort(int* array, int left, int right)
{
	//there is always an ending condition for recursive 
	if(left >= right)
	{
		return;
	}
	int i = left + 1;
	int j = left + 1;

	//We pick the first element as the pivot. It is free to use any element as pivot.
	//An improvement can be made by first selecting a random element in the array and 
	//swapping it with the first one.
	int pivot = array[left];
	while(true)
	{
		//find the first element larger than pivot 
		while(i < right && array[i] <= pivot)
		{
			i++;
		}
		//find the first element smaller than pivot after i
		j = i + 1;
		while(j < right && array[j] > pivot)
		{
			j++;
		}
		// if i < right && j < right, we need to swap the ith and jth element to 
		// ensure that all left elements are <= pivot, while those on the right > pivot
		if(i < right && j < right)
		{
			swap(array, i, j);
			i++;
		}
		else
		{
			//this is a bit tricky. i >= right means that all elements are <= pivot.
			//so we should swap pivot with the last element, i.e., the (i-1)th. 
			//If j >= right, it means that all elements after i are > pivot including i.
			//so we also should swap pivot with the (i-1)th element.
			swap(array, i-1, left);
			//we break here as the pivot arrives the right position in the array.
			break;
		}
	}
	//deal with the left/right sub-problems
	my_qsort(array, left, i - 2);
	my_qsort(array, i, right);
}


#endif
