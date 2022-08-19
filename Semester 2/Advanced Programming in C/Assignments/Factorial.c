#include<stdio.h>
int main()
{       int p=1;
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		 p*=i;
	}
	printf("Factorial = %d\n",p);
	return 0;
}

