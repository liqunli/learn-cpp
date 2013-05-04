#ifndef BINARY_FIND_H
#define BINARY_FIND_H

//todo: add comments
//
int _binaryFind(int* array, int left, int right, int toBeFind)
{
	if(right == left)
	{
		return left;
	}
	int mid = (left + right) /2;
	if(toBeFind < mid)
	{
		_binaryFind(array, left, mid - 1, toBeFind);
	}	
	else if(toBeFind > mid)
	{
		_binaryFind(array, mid + 1, right, toBeFind);
	}
	else //toBeFind == mid
	{
		return mid;
	}
}


int binaryFind(int *array, int len, int toBeFind)
{
	if(toBeFind < array[0] || toBeFind > array[len - 1])
	{
		return -1;
	}
	int idx = _binaryFind(array, 0, len - 1, toBeFind);
	//return the first element==toBeFind
	while(idx >= 0 && array[idx - 1] == array[idx])
	{
		idx--;
	}
	return idx;
}




#endif
