#include <stdio.h>
int main()
	
	{
		int i,j;		
		int (*c)[4][3];
		int (*fun3())[4][3];
		c = fun3();
		for(i=0;i<4;i++)
		{
			printf("\n");
			for(j=0;j<3;j++)
			{
				printf("%d ",(*c)[i][j]);
			}
		}			
		return 0;
	}
int (*fun3())[4][3]
	{
		static int hello[4][3]={45,65,43,12,31,55,53,67,31,22,43,67};
		return (int(*)[4][3])hello;

	}
