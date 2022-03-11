#include <stdio.h>
#define N 2
struct bank_info
{
    int act_no;
    char cname[34];
    int balance;
    int pin;
} c[N];
int main()
{
    int i, op, actno, a, flag = 0, amount, bl,pass;
    float withdraw[N];
    for (i = 1; i <= N; i++)
    {
        printf("Enter the account number of customer %d ", i);
        scanf("%d", &c[i].act_no);
        printf("Enter the name of the customer ");
        scanf("%s", c[i].cname);
        printf("Enter the balance ");
        scanf("%d", &c[i].balance);
        printf("Enter your Pin:");
        scanf("%d",&c[i].pin);
        printf("\n");
    }
    /*for (i = 1; i <= N; i++)
    {
        printf("\nThe account number of customer %d is %d ", i + 1, c[i].act_no);
        printf("\nThe name of the customer is %s ", c[i].cname);
        printf("\nThe balance of customer %d is %d  \n", i + 1, c[i].balance);
    }*/

    printf("press 1 for withdrawal\npress 2 for check blance\n");
    printf("Enter your choice:");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Enter your actno:");
        scanf("%d", &actno);
        printf("Enter Withdrawal Amount:");
        scanf("%d", &amount);
        printf("Enter your pin:");
        scanf("%d", &pass);

        for (i = 1; i <= N; i++)
        {
            if (pass == c[i].pin)
            {
                if (amount < c[i].balance)
                {
                    if (c[i].balance > 500)
                    {
                        bl = c[i].balance - amount;
                        printf("Amount Withdraw Successfully-----\n");
                        printf("your balance after withdrawal is %d", bl);
                    }
                    else
                    {
                        printf("Insufficient Balance----");
                    }
                }
                else
                {
                    printf("Your Entered Amount is Higher Than your Balance---");
                }
            }
        }

        break;

    case 2:
        printf("Enter your actno:");
        scanf("%d", &actno);
        printf("Enter your pin:");
        scanf("%d", &pass);

        for (i = 0; i < N; i++)
        {
            if (pass == c[i].pin)
            {
                if (actno == c[i].act_no)
                {
                    printf("Your Current Balance is %d", c[i].balance);
                }
                else
                {
                    printf("invalid actno---");
                }
            }
        }
        
        break;
    }
    return 0;
}