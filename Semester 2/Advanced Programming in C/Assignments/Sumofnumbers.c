#include<stdio.h>
int main()
{
	 int n;
	 int sum=0;
	 int a;
	 printf("Enter a number : ");
	 scanf("%d",&n);

	 for(int i=1;i<=n;i++)
	 {
		 printf("\nEnter a number : "); 
		 scanf("%d",&a);
		 sum+=a;
	 }
	 printf("Sum=%d ",sum);
	 return 0;
}

