#ifndef TREE_H
#define TREE_H
#include<iostream>
using namespace std;
#include "swap.h"

#define MAX_TREE_SIZE 100

class HeapTree
{
	private:
		int array[MAX_TREE_SIZE];
		int size;
		bool getLeftChild(int root, int& child);
		bool getRightChild(int root, int &child);
		bool getParent(int child, int& parent);
		void keepOrderDown(int root);
		void buildMaxHeapTree();
	public:
		HeapTree(int* data, int len);
		~HeapTree();
		HeapTree(HeapTree& another);
		void sort();
		void printData();
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

void HeapTree::buildMaxHeapTree()
{
	int lastNonChild = 0;
	getParent(size - 1, lastNonChild);//get the last non-child node on the tree
	for(int i = lastNonChild; i >= 0; i--)
	{
		keepOrderDown(i);
	}
}

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

void HeapTree::printData()
{
	for(int i = 0; i<size;i++)
	{
		cout<<array[i]<<endl;
	}
}
#endif
