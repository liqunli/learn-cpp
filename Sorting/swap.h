#ifndef SWAP_H
#define SWAP_H

void swap(int* array, int i, int j, int len)
{
	if(i < 0 || i >= len || j < 0 || j >= len || i==j)
	{
		return;
	}	
	int tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
	return;	
}

#endif
