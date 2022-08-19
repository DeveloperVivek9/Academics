#include<stdio.h>
int main()
{
        int n,i;
        printf("Enter the value of n : ");
        scanf("%d",&n);
        int A[n];
        int *p=A;
        printf("\nEnter the array elements : ");
        for(i=0;i<n;i++)
                scanf("%d",&(*(p+i)));
        printf("\n");
        for(i=0;i<n;i++)
                printf("%d\t",*(p+i));
        printf("\n");
        return 0;
}


