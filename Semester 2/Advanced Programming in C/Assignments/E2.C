#include<stdio.h>
#include<string.h>
struct Rainfall
{
        char season[50];
        char location[50];
        char pressure[50];
        float temperature;
        float humidity;
}R[20];
int main()
{
        int i,n;
        printf("\nEnter the number of places you wish to enter : ");
        scanf("%d",&n);
        getchar();
        int S[n],L[n],P[n];
        for(i=0;i<n;i++)
        {
                printf("\nPlace #%d details",i+1);
                printf("\n-----------------");
                printf("\nEnter the season [Rainy/Spring/Winter/Summer] : ");
                gets(R[i].season);
                printf("\nEnter the location [Tropical forest/Sub-tropical/High altitude/Desert] : ");
                gets(R[i].location);
                printf("\nEnter the pressure [Very low/Low/Normal/High] : ");
                gets(R[i].pressure);
                printf("\nEnter the temperature : ");
                scanf("%f",&R[i].temperature);
                printf("\nEnter the humidity : ");
                scanf("%f",&R[i].humidity);
        }
        for(i=0;i<n;i++)
        {
                if(strcmp("Rainy",R[i].season)==0||strcmp("rainy",R[i].season)==0)
                        S[i]=5;
                else if(strcmp("Spring",R[i].season)==0||strcmp("spring",R[i].season)==0)
                        S[i]=3;
                else if(strcmp("Winter",R[i].season)==0||strcmp("winter",R[i].season)==0)
                        S[i]=2;
                else if(strcmp("Summer",R[i].season)==0||strcmp("summer",R[i].season)==0)
                        S[i]=1;
                if(strcmp("Tropical forest",R[i].location)==0||strcmp("tropical forest",R[i].location)==0)
                        L[i]=5;
                else if(strcmp("Sub-tropical",R[i].location)==0||strcmp("Sub tropical",R[i].location)==0||strcmp("sub tropical",R[i].location)==0)
                        L[i]=4;
                else if(strcmp("High altitude",R[i].location)==0||strcmp("high altitude",R[i].location)==0)
                        L[i]=2;
                else if(strcmp("Desert",R[i].location)==0||strcmp("desert",R[i].location)==0)
                        L[i]=1;
                if(strcmp("Very low",R[i].pressure)==0||strcmp("very low",R[i].pressure)==0)
                        P[i]=5;
                else if(strcmp("Low",R[i].pressure)==0||strcmp("low",R[i].pressure)==0)
                        P[i]=4;
                else if(strcmp("Normal",R[i].pressure)==0||strcmp("normal",R[i].pressure)==0)
                        P[i]=2;
                else if(strcmp("High",R[i].pressure)==0||strcmp("high",R[i].pressure)==0)
                        P[i]=1;
                else
                        printf("\nError:Make sure that the factors pressure, location and season are given as per the requested inputs since they are key sensitive");
        }
        float Result[n];
        printf("\nThe probability of rainfall in the given places\n");
        printf("\n-----------------------------------------------\n");
        for(i=0;i<n;i++)
        {
                Result[i]=((((S[i]/5)+(R[i].humidity/100)+(R[i].temperature/50)+(P[i]/5)+(L[i]/5))/5)*100);
                printf("The probability of rainfall in Place %d: %f\n",i+1,Result[i]);
        }
        return 0;
}