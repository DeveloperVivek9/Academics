#include<stdio.h>
int main()
{
	int n;int c=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n==0)
		c+=1;
	while(n!=0)
	{
		c+=1;
		n=n/10;
	}
	printf("The number of digits : %d",c);
	return 0;
}

