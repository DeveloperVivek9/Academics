//to print a m*n matrix
#include<stdio.h>

int matread(int A[10][10],int m,int n)
{	
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	return 0;
}

int matdisp(int A[10][10],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	return 0;
}

int main()
{
	int A[10][10],m,n;
	printf("\nPlease enter the no. of rows and columns(Max 10 each)");
	scanf("%d %d",&m,&n);
	if(m>10||n>10)
	printf("try again\n");
	else
	matread(A,m,n);
	printf("\nThe matrix entered is : \n");
	matdisp(A,m,n);
	printf("\nThank You\n");
	return 0;
}			
			
