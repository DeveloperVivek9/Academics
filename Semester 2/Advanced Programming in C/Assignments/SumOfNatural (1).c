#include<stdio.h>
int main()
{
	int sum=0;
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("Sum= %d\n",sum);
	return 0;
}


