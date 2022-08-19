#include<stdio.h>
struct Experiment
{
        int a;
        int b;
}E[10];
void Function(struct Experiment *Exp,int n)
{
        int i;
        for(i=0;i<n;i++)
        {
                printf("\nExperiment #%d",i+1);
                printf("\n--------------");
                printf("\nEnter value of a : ");
                scanf("%d",&((Exp+i)->a));
                printf("\nEnter the value of b : ");
                scanf("%d",&((Exp+i)->b));
        }
        for(i=0;i<n;i++)
        {
                printf("\nExperiment #%d",i+1);
                printf("\na=%d",Exp->a);
                printf("\nb=%d",Exp->b);
                Exp++;
        }
}
struct Experiment Function2(struct Experiment *Exp,int n)
{
        int i;
        struct Experiment A;
        A.a=A.b=0;
        for(i=0;i<n;i++)
        {
                A.a+=Exp->a;
                A.b+=Exp->b;
                Exp++;
        }
        return A;
}
int main()
{
        int n;
        struct Experiment B;
        printf("Enter the value of n : ");
        scanf("%d",&n);
	Function(E,n);
        B=Function2(E,n);
        printf("\nValue of a : %d",B.a);
        printf("\nValue of b : %d",B.b);
        return 0;
}