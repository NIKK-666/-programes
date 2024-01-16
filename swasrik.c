#include<stdio.h>

int main()
{
	int rows, cols, i, j;
	printf("Enter number of rows and columns: \n");
	scanf("%d%d", &rows, &cols);
	for(i=0; i < (rows*2 + 1); i++)
	{
		for(j=0; j < (cols*2 + 1); j++)
		{
			if(i == rows )
				printf("*");
			else if(i == 0 && j > cols)
				printf("*");
			else if(j == cols*2 && i > rows)
				printf("*");
			else if(i == rows*2 && j < cols)
				printf("*");
			else if(j == 0 && i < rows)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 1;
}