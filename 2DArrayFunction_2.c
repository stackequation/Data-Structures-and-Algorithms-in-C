#include <stdio.h>

int main()
	{
	int i,j;
	int (*b)[3];
	int (*fun2())[3];
	int *p;
	b = fun2();
	for(i=0;i<4;i++)
	{
		printf("\n");
		p = (int *)(b + i);
		for(j=0;j<3;j++)
		{
			printf("%d ",*p);
			p++;
		}
	}
	
	return 0;
	}
int (*fun2())[3]
	{
		static int t[4][3]={23,41,12,15,22,42,43,13,45,66,73,88};
		return t;
	}
