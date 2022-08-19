#include<stdio.h>
int main()
{
        int i,temp,*p,n;
        printf("Enter the value of n : ");
        scanf("%d",&n);
        int A[n];
        p=A;
        printf("Enter the array elements : ");
        for(i=0;i<n;i++)
        {
                scanf("%d",&(*(p+i)));
        }
        for(i=0;i<n/2;i++)
        {
                temp=*(p+i);
                *(p+i)=*(p+(n-1-i));
                *(p+(n-1-i))=temp;
        }
        printf("\n\t\tThe reversed array\n\t\t------------------\n");
        for(i=0;i<n;i++)
        {
                printf("%d\t",*(p+i));
        }
        printf("\n");
        return 0;
}
