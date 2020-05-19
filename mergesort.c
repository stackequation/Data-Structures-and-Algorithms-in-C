#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void merge(int *A, int p, int q, int r)
{
	int i, j, k;
	int n1 = q - p + 1;
	int n2 = r - q;
	

	int* X = (int*)malloc(sizeof(int) * n1);
	int* Y = (int*)malloc(sizeof(int) * n2);
	for (i = 0; i < n1; i++)
	{
		X[i] = A[p + i];
	}

	for (j = 0; j < n2; j++)
	{
		Y[j] = A[q + 1 + j];
	}

	i = 0, j = 0, k = p;

	while (i < n1 && j < n2)
	{
		if (X[i] <= Y[j])
		{
			A[k] = X[i];
			i++;


		}
		else
		{
			A[k] = Y[j];
			j++;


		}
		k++;
	}
	while (i < n1)
	{
		A[k] = X[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		A[k] = Y[j];
		j++;
		k++;
	}

}
void mergesort(int *A, int p, int r)
{
	int q;
	if (p < r)
	{
		q = p + (r - p) / 2;
		mergesort(A, p, q);
		mergesort(A, q + 1, r);
		merge(A, p, q, r);
	}
}

int main()
{	
	int i;
	int A[] = { 23,76,45,12,36 };
	mergesort(A, 0, 4);
	for (i = 0; i < 5; i++) 
	{
		printf("%d ", A[i]);
	}
	return 0;
}
