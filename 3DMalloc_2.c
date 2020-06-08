#include <stdio.h>
#include <stdlib.h>
int main()
	{
		int i,j,k,p,q,r;
		scanf("%d %d %d",&p,&q,&r);
		int ***arr = (int ***)malloc(sizeof(int **)*p);
		for(i=0;i<p;i++)
		{
			arr[i] = (int **)malloc(sizeof(int *)*q);
			for(j=0;j<q;j++)
			{
				arr[i][j] = (int *)malloc(sizeof(int)*r);
				for(k=0;k<r;k++)
				{
					scanf("%d",(*(*(arr + i) + j) + k));
				}
			}
		}
		for(i=0;i<p;i++)
		{	
			printf("\n");		
			for(j=0;j<q;j++)
			{
				printf("  ");
				for(k=0;k<r;k++)
				{
					printf("%d ",*(*(*(arr + i) + j) + k));
				}
			}
		}
		return 0;	
	}
