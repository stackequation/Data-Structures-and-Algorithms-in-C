#include <stdio.h>
#define SET 2
#define ROW 3
#define COL 4
int main()
	{
		int (*c)[ROW][COL];
		int (*fun3())[ROW][COL];
		int i,j,k;
		int *p;
		c = fun3();
		for(i=0;i<SET;i++)
		{	
			p = (int *)(c + i);
			for(j=0;j<ROW;j++)
			{
				for(k=0;k<COL;k++)
				{
					printf("%d ",*p);
					p++;
				}
				printf("\n");
			}
		}
		return 0;
	}
int (*fun3())[ROW][COL]
	{
		static int arr[SET][ROW][COL] = {
					    {23,45,46,78,
					     89,90,65,32,
					     63,32,45,88},
					    {20,34,67,90,
					     77,54,67,89,
					     92,56,75,32}
					     };
		return (int  (*)[ROW][COL])arr;
	}
