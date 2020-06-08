#include <stdio.h>
#include <stdlib.h>	
	int main()
	{	
		int i,j,m,n;
		scanf("%d",&m);
		scanf("%d",&n);
		int **arr = (int **)malloc(sizeof(int *)*m);
		for(i=0;i<m;i++)
		{	
			arr[i] = (int *)malloc(sizeof(int)*n);
		}
		for(i=0;i<m;i++)
		{	
			for(j=0;j<n;j++)
			{
				scanf("%d",(*(arr + i) + j));
			}
		}
			for(i=0;i<m;i++)
		{	
			printf("\n");
			for(j=0;j<n;j++)
			{
				printf("%d ",*(*(arr + i) + j));
			}
		}
	
	}
