#include<stdio.h>

#include<math.h>

struct point
{

	float x;

        float y;

}A,B;

int main()

{

        float a,b,d;

        printf("Enter the coordinates of point A:\t");

        scanf("%f %f",&A.x,&A.y);

        printf("Enter the coordinates of point B:\t");

        scanf("%f %f",&B.x,&B.y);

        a=B.x-A.x;

        b=B.y-A.y;

        printf("Distance between point A and B is:\t");

        d=(a*a)+(b*b);

        d=sqrt(d);

        printf("%f",d);

        return 0;

}