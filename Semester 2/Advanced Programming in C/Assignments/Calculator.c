#include<stdio.h>
int main()
{
	int a,b,r,n,ch=1;
	do
	{
		printf("Enter 2 numbers on which we have to perform operations : ");
		scanf("%d %d",&a,&b);
		printf("\n1.Addition\n2.Subtraction\n3.Division\n4.Multiplication\nEnter Your Choice :");
		scanf("%d",&n);
		if(n==1)
		r=a+b;
		else if(n==2)
			r=a-b;
		else if(n==3)
			r=a/b;
		else if(n==4)
			r=a*b;
		else 
			printf("\nEnter a valid option");
		printf("Result = %d",r);
	        printf("\nDo you want to continue?[1/0]");
		scanf("%d",&ch);	
	}while(ch==1);
return 0;
}

