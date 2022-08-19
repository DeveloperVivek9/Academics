#include<stdio.h>
int main()
{
	int n,p;
	printf("Enter a  number : ");
	scanf("%d",&n);
	printf("\nThe Multiplication Table of %d\n",n);
	printf("\n------------------------------\n");
	for(int i=1;i<=10;i++)
	{	p=n*i;
		printf("%d x %d = %d\n",n,i,p);

	}
return 0;
}

