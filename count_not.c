#include <stdio.h>
#define N 2
struct bank_info
{
    int act_no;
    char cname[34];
    int balance;
} c[N];
void main()
{
    int i;
    int b[6];
    int a[6] = {2000,500, 100, 50, 20, 10}, temp;
    for (i = 0; i < N; i++)
    {
        printf("Enter the account number of customer %d ", i + 1);
        scanf("%d", &c[i].act_no);
        printf("Enter the name of the customer ");
        scanf("%s", c[i].cname);
        printf("Enter the balance ");
        scanf("%d", &c[i].balance);
        printf("\n");
    }
    for (i = 0; i < N; i++)
    {
        printf("\nThe account number of customer %d is %d ", i + 1, c[i].act_no);
        printf("\nThe name of the customer is %s ", c[i].cname);
        printf("\nThe balance of customer %d is %d  \n", i + 1, c[i].balance);
    }
    int withdrawal[N];
    for (i = 0; i < N; i++)
    {
        printf("\nEnter withdrawal amount for account number  %d ", c[i].act_no);
        scanf("%d", &withdrawal[i]);

        
    }

    for (i = 0; i < N; i++)
    {
        if (c[i].balance > 1000)
        {
            printf("\nfor customer %d ", i + 1);
            printf("\nAct number : %d ", c[i].act_no);
            printf("\nCustomer Name : %s ", c[i].cname);
            printf("\nBalace : %d \n", c[i].balance);
        }

        if (withdrawal[i] > c[i].balance)
        {
            printf("\nfor customer %d ", i + 1);
            printf("Invalid withdrawal amount \n");
        }
        else if (c[i].balance < 100)
        {
            printf("\nfor customer %d ", i + 1);
            printf("can't withdraw \n");
        }

        else
        {
            printf("\nfor customer %d ", i + 1);
            c[i].balance = c[i].balance - withdrawal[i];
            printf("Amount after withdrawal : %d \n", c[i].balance);
        }
    }
    for (i = 0; i < N; i++)
    {
         printf("for customer %d\n---------------",i+1);
        for(int j=0;j<6;j++)
        {
           
            b[j]=withdrawal[i] / a[j];
            withdrawal[i] =withdrawal[i] % a[j];
            printf("\n%d notes is:%d", a[j],b[j]);
            
        }
        printf("\n");
        printf("==================\n");
        
    }
   
}
