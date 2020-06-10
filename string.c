#include <stdio.h>
int main()
	{
		char str[]="hello";
		int i =0;
		while(str[i])
		{
			printf("%c %c %c %c \n",str[i],i[str],*(str + i),*(i+str));
			i++;
		}
		return 0;

	}
