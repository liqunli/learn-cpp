#include<iostream>
#include "qsort.h"
#include "bubblesort.h"
#include "mergesort.h"
#include "heaptree.h"
#include "binaryfind.h"
#include <stdio.h>
using namespace std;

int main()
{
    int array[5] = {1, 5, 2, 4, 1};
    //my_qsort(array, 0, 5);
    //my_bubblesort(array, 5);
    //my_bubblesort2(array, 5);
    my_mergesort(array, 0, 5);
	/*HeapTree tree(array, 5);
tree.insert(3);
tree.insert(6);
tree.insert(1);
tree.insert(2);
tree.sort();
	tree.printData();*/

	cout<<binaryFind(array, 5, 1)<<endl;
	cout<<binaryFind(array, 5, 2)<<endl;
	cout<<binaryFind(array, 5, 5)<<endl;
    //for(int i = 0; i < 5; ++i)
    {
      //  cout<<array[i]<<endl;
    }

    return 0;
}
