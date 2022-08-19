#include<stdio.h>
int main()
{
        int n,p,i;
        p=1,i=1;
        int *q=&i;
        printf("Enter the value of n : ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                p*=*q;
        }
        printf("%d\n",p);
        return 0;
}
