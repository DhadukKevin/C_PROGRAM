#include<stdio.h>
#include<string.h>
void main()
{
    
    int n,i,count0=0,count1=0;

    printf("Enter A Number :");
    scanf("%d",&n);

    while(n>0)
    {
        i=n%10;
        if(i==0)
        {
            count0++;
        }
        else
        {
            count1++;
        }
        n=n/10;
    }
    printf("Number Of 0=%d\n",count0);
    printf("Number Of 1=%d",count1);
}