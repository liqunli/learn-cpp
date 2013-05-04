#ifndef HEAP_TREE_H
#define HEAP_TREE_H

#include<iostream>
using namespace std;
//include swap.h for using the function of swapping two elements in an arry
#include "swap.h"
//define the maximum size of the heaptree
#define MAX_TREE_SIZE 100

class HeapTree
{
	private:
		int array[MAX_TREE_SIZE];
		int size;
		bool getLeftChild(int root, int& child);
		bool getRightChild(int root, int &child);
		bool getParent(int child, int& parent);
		//find the right position for the root element in a subtree
		void keepOrderDown(int root);
		//build the max heaptree
		void buildMaxHeapTree();
	public:
		//create a new heaptree based on an integer array
		HeapTree(int* data, int len);
		~HeapTree();
		HeapTree(HeapTree& another);
		//insert new element into the max-heaptree 'before' sorting
		//after sorting, we may use binary insertion
		bool insert(int newData);
		void printData();

		void sort();
};

HeapTree::HeapTree(int* data, int len)
{
	if(len >= MAX_TREE_SIZE)
	{
		return;
	}
	for( int i = 0;i < len; ++i)
	{
		array[i] = data[i];
	}
	size = len;
}

HeapTree::~HeapTree()
{
	//do nothing
}

HeapTree::HeapTree(HeapTree& another)
{
	for( int i = 0; i< another.size; ++i)
	{
		array[i] = another.array[i];
	}
	size = another.size;
}

bool HeapTree::getLeftChild(int root, int& child)
{
	if(root >= size || root*2+1 >= size)
	{
		return false;
	}

	child =  root*2+1;
	return true;
}

bool HeapTree::getRightChild(int root, int& child)
{
	if(root>=size || root*2+2 >= size)
	{
		return false;
	}
	
	child =  root*2 + 2;
	return true;
}

bool HeapTree::getParent(int child, int& parent)
{
	if(child >= size || (child-1)/2 < 0)
	{
		return false;
	}
	parent = (child-1)/2;
	return true;
}
//This is the key function in heap sort which takes the input of an index/pointer to
//an element on the tree. If the left and right sub-trees are already in the right order,
//after invoking keepOrderDown, the tree rooted at 'root' should be in the right order.
void HeapTree::keepOrderDown(int root)
{
	if(root >= size)
	{
		return;
	}
	int max = root;
	int left, right;
	if(getLeftChild(root, left))
	{
		if(array[left] > array[max])
		{
			max = left;
		}
	}
	if(getRightChild(root, right))
	{
		if(array[right] > array[max])
		{
			max = right;
		}
	}
	if(max != root)
	{
		swap(array, root, max, size);
		keepOrderDown(max);
	}
}

//Note that invoking keepOrderDown is based on the assumption that the left/right subtrees
//are in the right order. So buildMaxHeapTree starts from building the shortest heaptrees 
//from the very bottom level.
void HeapTree::buildMaxHeapTree()
{
	int lastNonChild = 0;
	//get the last non-child node on the tree 
	//start to orgnize the elements in the right order
	getParent(size - 1, lastNonChild);
	for(int i = lastNonChild; i >= 0; i--)
	{
		keepOrderDown(i);
	}
}

//The root of the heaptree should be the largest element in the array. For each step, swap
//the root element (i.e., the 0th element) with the last one, and then run keepOrderDown(0)
//on a sub-array with size decreased by one. Essentially, after swapping, the left/right
//subtrees of the new root are in the right order. 
void HeapTree::sort()
{
	buildMaxHeapTree();
	int tmp = size; //buff the size
	for(int i = tmp - 1; i > 0; i--)
	{
		swap(array, 0, i, size);
		size--;
		keepOrderDown(0);
	}	
	size = tmp;
}

bool HeapTree::insert(int newData)
{
	if(size == MAX_TREE_SIZE)
	{
		return false;
	}
	//put the new data into the array
	array[size] = newData;
	size++;
	int cur_idx = size - 1;
	while(true)
	{
		int parent = 0;
		bool suc = getParent(cur_idx, parent);
		//record the value of parent to check if we should keep going up
		int tmp = array[parent];
		if(!suc)
		{
			//the parent is smaller than 0
			break;
		}
		keepOrderDown(parent);

		if(tmp == array[parent])
		{
			//the order is correct, no need to keep going up
			break;
		}
		else
		{
			cur_idx = parent;
		}
	}
	return true;
}

void HeapTree::printData()
{
	for(int i = 0; i<size;i++)
	{
		cout<<array[i]<<endl;
	}
}
#endif
