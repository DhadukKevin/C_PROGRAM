#include <stdio.h>
struct student
{
	char name[100];
	char branch[100];
	int yoj;
	int roll;

} stud[5];
void main()
{
	int n, year, rn;
	for (int i = 0; i < 5; i++)
	{
		printf("Enter %d student detail:\n", i + 1);
		printf("student Name=");
		scanf("%s", &stud[i].name);
		printf("branch=");
		scanf("%s", &stud[i].branch);
		printf("year of joining:");
		scanf("%d", &stud[i].yoj);
		printf("roll no:");
		scanf("%d", &stud[i].roll);
		printf("-------------------------------------\n");
	}
	/*for(int i=0;i<2;i++)
	{
		printf("=================================================\n");
		printf("%d student detail:\n",i+1);
		printf("------------------\n");
		printf("student Name=%s\n",stud[i].name);
		printf("branch=%s\n",stud[i].branch);
		printf("year of joining:%d\n",stud[i].yoj);
		printf("roll no:%d\n",stud[i].roll);
	}*/

	printf("press 1 for fetch data from year of joining\npress 2 for fecth data from roll number\n");
	printf("enter your choise:");
	scanf("%d", &n);

	switch (n)
	{
	case 1:
		printf("Enter Year of joining:");
		scanf("%d", &year);
		for (int i = 0; i < 5; i++)
		{
			if (year == stud[i].yoj)
			{
				printf("=================================================\n");
				printf("student Name=%s\n", stud[i].name);
				printf("branch=%s\n", stud[i].branch);
				printf("year of joining:%d\n", stud[i].yoj);
				printf("roll no:%d\n", stud[i].roll);
			}
			
		}
		break;

	case 2:
		printf("Enter Roll number:");
		scanf("%d", &rn);
		for (int i = 0; i < 5; i++)
		{
			if (rn == stud[i].roll)
			{
				printf("=================================================\n");
				printf("student Name=%s\n", stud[i].name);
				printf("branch=%s\n", stud[i].branch);
				printf("year of joining:%d\n", stud[i].yoj);
				printf("roll no:%d\n", stud[i].roll);
			}
			
		}
		break;
	}
}