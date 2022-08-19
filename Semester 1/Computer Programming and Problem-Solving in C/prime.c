#include<stdio.h>

int main()
{
	int i,n,m=0,flag;
	printf("Enter the number : ");
	scanf("%d",&n);
	m=n/2;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{	
			flag=1;
			break;
		}
		else
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("The number is not a prime number\n");

	else if(flag==1)
	printf("The number is a prime number\n");
	
	return 0;
}
