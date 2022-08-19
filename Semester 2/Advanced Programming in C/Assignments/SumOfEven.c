#include<stdio.h>
int main()
{
	 int n;
	 int sum=0;
	 printf("Enter the value of n : ");
	 scanf("%d",&n);
	 for(int i=2;i<=n;i+=2)
	 {
		sum+=i;
	 }
	 printf("sum = %d\n",sum);
	 return 0;
}

