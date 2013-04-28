#ifndef MERGE_SORT_H
#define MERGE_SORT_H

//merge the two part of an array [left...mid-1], [mid...right]
void mergeTwoArrays(int* array, int left, int mid, int right)
{
	if(left == right)
	{
		return;
	}
	int* tmp = new int[right - left + 1];
	int l_ptr = left;
	int r_ptr = mid;
	for(int i = 0; i < right - left + 1; ++i)
	{
		//two cases:
		//1. left branch is not empty and left <= right 
		//2. right branch is already empty
		if((l_ptr < mid && array[l_ptr] <= array[r_ptr]) || r_ptr > right)
		{
			tmp[i] = array[l_ptr];
			l_ptr++;
		}
		else
		{
			tmp[i] = array[r_ptr];
			r_ptr++;
		}
	}
	for(int i = 0; i < right - left + 1; ++i)
	{
		//error prone. remember that we are modifying the array[left...right]
		array[left + i] = tmp[i];
	}
	delete tmp;
}	

void my_mergesort(int* array, int left, int right)
{
	if(left == right)
	{
		return;
	}
	//recursively sort left and right branches
	my_mergesort(array, left, (left + right)/2);
	my_mergesort(array, (left + right)/2 + 1, right);
	//merge two braches together
	mergeTwoArrays(array, left, (left + right)/2 + 1, right);
}

#endif
