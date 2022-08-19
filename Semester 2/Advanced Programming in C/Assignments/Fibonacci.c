#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number till which you want to see the fibonacci series generation : ");
	scanf("%d",&n);
	int a=1;
	int b=1;
	int c=a+b;
	printf("%d \t%d \t%d",a,b,c);
	for(int i=1;i<=n-2;i++)
	{
		a=b;
		b=c;
		c=a+b;
		printf("\t%d",c);
	}
	printf("\n");
	return 0;
}

