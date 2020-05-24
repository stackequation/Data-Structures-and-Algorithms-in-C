#include<stdio.h>
void selectionsort(int* A, int, int);
int main()
{
	int i,p[] = { 78,90,65,42,32,12 };
	selectionsort(p, 0, 6);
	for (i = 0; i < 6; i++)
	{
		printf("%d ", p[i]);
	}

	return 0;
}
void selectionsort(int* A, int m, int n)
{
	int i, j, imin,temp;


	for (j = 0; j < n; j++)
	{
		imin = j;
		for (i = j + 1; i < n; i++)
		{
			if (A[i] < A[imin])
			{
				imin = i;
			}
			temp = A[imin];
			A[imin] = A[j];
			A[j] = temp;
		}
	}
	

}
