#include<stdio.h>
int sum(int);
void main()
{
    int n1,n2,sum1,sum2;

    printf("Enter n1,n2:");
    scanf("%d%d",&n1,&n2);

    /*for n1*/
    
    sum1=sum(n1);
    sum2=sum(n2);

    if(sum1>sum2)
    {
        printf("%d is larger",n1);

    }
    else if(sum2>sum1)
    {
        printf("%d is larger",n2);
    }
    else
    {
        printf("-1");
    }

    int sum(int x)
    {
        int i,sum=0,n;
        while(n>0)
        {
            
            i=n%10;
            sum+=i;
            n=n/10;
        }
        return sum;
    }
}