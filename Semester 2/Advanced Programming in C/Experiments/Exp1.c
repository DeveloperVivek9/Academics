#include<stdio.h>
struct Student
{
	char Name[50];
	int Rollno;
	float cgpa;
};
int main()
{
	int i,n;
	printf("Enter the number of students : ");
	scanf("%d",&n);
	struct Student S[10];
	FILE *fp;
	fp=fopen("E1.dat","wb");
	if(fp==NULL)
	{
		printf("File not opening");
		exit(0);
	}
	printf("Enter the details [Name,Rollno,CGPA] ");
	for(i=0;i<n;i++)
	{
		scanf("%s","%d","%f",S[i].Name,&S[i].Rollno,&S[i].cgpa);
	}
	fwrite(&S[0],sizeof(struct Student),n,fp);
	fclose(fp);
	i=0;
	fp=fopen("E1.dat","rb");
	while(fread(&S[0],sizeof(struct Student),1,fp)==1)
	{
		printf("%s\n%d\n%f",S[i].Name,S[i].Rollno,S[i].cgpa);
		i++;
	}
	fclose(fp);
	return 0;	
}