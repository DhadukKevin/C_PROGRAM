#include <stdio.h>
#define N 2
struct bank_info
{
    int act_no;
    char cname[100];
    int balance;
    int pin;
} c[N];
void note_count(int);
int main()
{
    int i, op, actno, a, flag = 0, amount, bl,pass;
    float withdraw[N];
    for (i = 1; i <= N; i++)
    {
        printf("Enter act no of customer %d :", i);
        scanf("%d", &c[i].act_no);
        printf("Enter name:");
        scanf("%s", c[i].cname);
        printf("Enter balance :");
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
         printf("Enter your pin:");
        scanf("%d", &pass);
        printf("Enter Withdrawal Amount:");
        scanf("%d", &amount);
       
        

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
                        note_count(amount);
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

void note_count(int amount)
{
    int c2000=0,c500=0,c200=0,c100=0,c50=0,c20=0,c10=0,c5=0,c2=0,c1=0;

    if(amount>=2000)
    {
        c2000=amount/2000;
        amount=amount%2000;
    }
    if(amount>=500)
    {
        c500=amount/500;
        amount=amount%500;
    }
    if(amount>=100)
    {
        c100=amount/100;
        amount=amount%100;
    }
    if(amount>=50)
    {
        c50=amount/50;
        amount=amount%50;
    }
    if(amount>=20)
    {
        c20=amount/20;
        amount=amount%20;
    }
    if(amount>=10)
    {
        c10=amount/10;
        amount=amount%10;
    }
    

    
    printf("2000 x %d\n",c2000);
    printf("500 x %d\n",c500);
    printf("100 x %d\n",c100);
    printf("50 x %d\n",c50);
    printf("20 x %d\n",c20);
    printf("10 x %d\n",c10);
   
    
}