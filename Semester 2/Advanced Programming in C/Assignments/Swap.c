#include<stdio.h>
int main()
{
        int a,b,temp,*p;
        p=&a;
        printf("Enter value of a and value of b : ");
        scanf("%d %d",&(*p),&b);
        temp=*p;
        *p=b;
        b=temp;
        printf("The value of a : %d \nThe value of b : %d\n",*p,b);
        return 0;
}
