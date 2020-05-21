#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void quicksort(int* A, int, int);
int partition(int* A, int, int);
void swap(int* x, int* y);
int main()
{	
	int i,A[] = {34,45,12,22,19,76,39};
	quicksort(A, 0, 6);
	for (i = 0; i < 7; i++)
	{
		printf("%d ", A[i]);
	}
	return 0;
}
void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void quicksort(int* A, int p, int q) 
{
	if (p < q)
	{
		int pindex;
		pindex = partition(A, p, q);
		quicksort(A, p, pindex-1);
		quicksort(A, pindex+1, q);
	}
	
}
int partition(int* A, int p, int q)
{
	int pindex,pivot,i,temp;
	pivot = A[q];
	pindex = p;
	for (i = p; i <q; i++)
	{
		if (A[i] <= pivot) 
		{
			swap(A + i, A + pindex);
			pindex = pindex + 1;
		}
	}
	swap(A + pindex, A + q);
	return pindex;
}

