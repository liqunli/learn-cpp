#ifndef QSORT_H
#define QSORT_H

//swap two elements
void swap(int* array, int i, int j)
{
	int tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
}

//the function has two index parameters left and right which are used for resursive calling
void my_qsort(int* array, int left, int right)
{
	if(left >= right)
	{
		return;
	}
	int i = left + 1;
	int j = left + 1;
	//the object is to detect if array[i] > array[j] where i < j
	//we pick the first element as the divider
	int judge = array[left];
	while(true)
	{
		//find the first element larger than judege
		while(i < right && array[i] <= judge)
		{
			i++;
		}
		j = i + 1;
		//find the first element smaller than judge after i
		while(j < right && array[j] > judge)
		{
			j++;
		}
		if(i < right && j < right)
		{
			swap(array, i, j);
			i++;
		}
		else
		{
			swap(array, i-1, left);
			break;
		}
	}
	my_qsort(array, left, i - 2);
	my_qsort(array, i, right);
}


#endif
