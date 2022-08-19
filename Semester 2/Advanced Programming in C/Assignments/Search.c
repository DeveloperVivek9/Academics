#include<stdio.h>
int main()
{
        int n,i,item;
        printf("Enter the value of n : ");
        scanf("%d",&n);
        int A[n];
        int *p=A;
        printf("\nEnter the array elements : ");
        for(i=0;i<n;i++)
        {
                scanf("%d",&(*(p+i)));
        }
        printf("\nEnter the element to search for : ");
        scanf("%d",&item);
        int flag=0;
        for(i=0;i<n;i++)
        {
                if(*(p+i)==item)
                {
                        printf("\nThe element is found at position %d\n",i+1);
                        flag++;
                }
        }
        if(flag==0)
        {
                printf("\nSorry!The given element is not in the array\n");
        }
        return 0;
}
