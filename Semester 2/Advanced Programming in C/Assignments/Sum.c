#include<stdio.h>
int main()
{
        int sum=0,i,n,*p;
        printf("Enter the number of elements : ");
        scanf("%d",&n);
        int A[n];
        p=A;
        printf("\nEnter the array elements : ");
        for(i=0;i<n;i++)
        {
                scanf("%d",&(*(p+i)));
                sum+=*(p+i);
        }
        printf("\nThe sum of the array elements : %d\n",sum);
        return 0;
}

