#include <stdio.h>
#define SET 2
#define ROW 3
#define COL 4
int main()
	{
		int (*d)[SET][ROW][COL];
		int (*fun4())[SET][ROW][COL];
		int i,j,k;
		d = fun4();
		for(i=0;i<SET;i++)
		{	
			for(j=0;j<ROW;j++)
			{
				for(k=0;k<COL;k++)
				{
					printf("%d ",(*d)[i][j][k]);
				
				}
				printf("\n");
			}
		}
		return 0;
	}
int (*fun4())[SET][ROW][COL]
	{
		static int arr[SET][ROW][COL] = {
					    {23,45,46,78,
					     89,90,65,32,
					     63,32,45,88},
					    {20,34,67,90,
					     77,54,67,89,
					     92,56,75,32}
					     };
		return (int  (*)[SET][ROW][COL])arr;
	}
