#include <stdio.h>
int main()
	{
		int i,j;
		int *s;
		int *fun1();
		s = fun1();
		for(i=0;i<4;i++)
		{
			printf("\n");
			for(j=0;j<3;j++)
			{
				printf("%d ",*(s+i*3+j));			
			}
		}

		return 0;
	}
	int *fun1()
	{
		static int a[4][3]=
		{23,45,64,67,89,25,23,32,31,38,12,43};
		return (int *)a;
		
	}
