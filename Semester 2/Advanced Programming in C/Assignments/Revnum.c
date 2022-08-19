#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	int i=n;
	while(i>0)
	{
		printf("\t %d",i);
		i--;
	}
	printf("\n");
	return 0;
}
