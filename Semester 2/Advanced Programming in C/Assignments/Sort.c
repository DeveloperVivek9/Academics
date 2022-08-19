#include<stdio.h>
int main()
{
        int i,j,n,*p,temp;
        printf("Enter the value of n : ");
        scanf("%d",&n);
        int A[n];
        p=A;
        printf("\nEnter the array elements : ");
        for(i=0;i<n;i++)
        {
                scanf("%d",&(*(p+i)));
        }
        for(i=0;i<n-1;i++)
        {
                for(j=0;j<n-1-i;j++)
                {
                        if(*(p+i)>*(p+i+1))
                        {
                                temp=*(p+i);
                                *(p+i)=*(p+i+1);
                                *(p+i+1)=temp;
                        }
                }
        }
        printf("\n\t\tThe sorted array\n\t\t----------------\n");
        for(i=0;i<n;i++)
        {
                printf("%d\t",*(p+i));
        }
        printf("\n");
        return 0;
}

