#include<stdio.h>
int main()
{
	int n;int c=1;
	int sum=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n>=0)
	{
		do
	{
		sum+=n;
		printf("Enter a number : ");
		scanf("%d",&n);
	}while(n>=0);
	}
 	printf("Sum = %d",sum);
	return 0;
	}

