#include<stdio.h>
int main()
{
	 int n,a,sum=0;
	 printf("\nEnter the value of n : ");
	 scanf("%d",&n);
	 for(int i=1;i<=n;i++)
	 { 
		 printf("\nEnter a number : ");
		 scanf("%d",&a);
		 sum+=a;
	 }
	 printf("Sum =%d\n",sum);
	 return 0;
}


