#include <stdio.h>
#include <stdlib.h>
	int main()
	{
		int p,q,r,i,j,k;
		scanf("%d %d %d",&p,&q,&r);		
		int *arr = (int *)malloc(sizeof(int)*p*q*r);
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				for(k=0;k<r;k++)
				{
					scanf("%d",arr + q*r*i + r*j + k);
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
					printf("%d ",*(arr + q*r*i + r*j + k));
				}
			}
		}
		return 0;
	}
