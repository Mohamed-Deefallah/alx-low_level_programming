#include <stdio.h>


int main(void)
{	
int i,j;
int num =10;

	for (i=0;i<num+1; i++)
	{
		for(j=0;j<num+1; j++)
		{	
			printf("%d",i, j);
			if (j<num)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	return(0);
}	
