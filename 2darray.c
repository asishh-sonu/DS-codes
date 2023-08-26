#include<stdio.h>
void main()
{
	int i,j, a[5][5];
	
	printf("Enter 5*5 elements of array\n");
	for(i=0; i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("The elements are\n");
	for(i=0;i<5;i++)
	{
	for(j=0;j<5;j++)
	
	{
		printf("%d",a[i][j]);
		}	
	
	printf("\n");
getch();
}

