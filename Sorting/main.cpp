#include<iostream>
#include "qsort.h"
#include "bubblesort.h"
#include "mergesort.h"
using namespace std;

int main()
{
    int array[5] = {1, 5, 2, 4, 1};
/*    my_qsort(array, 0, 5);
    my_bubblesort(array, 5);
    my_bubblesort2(array, 5);*/
	my_mergesort(array, 0, 4);
    for(int i = 0; i < 5; ++i)
    {
        cout<<array[i]<<endl;
    }
    return 0;
}
