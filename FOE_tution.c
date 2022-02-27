#include<stdio.h>
#define N 1000
void main()
{
    int fee[12],n,i,sum=0,j,student[N],std[12];

    for(i=0;i<12;i++)
    {

        printf("enter std:");
        scanf("%d",&std[i]);
        printf("%d std fee:",i+1);
        scanf("%d",&fee[i]);
        

    }
    printf("Enter Number of Student:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter Student %d std:",i+1);
        scanf("%d",&student[i]);
    }
    for(int k=0;k<12;k++)
    {
        for(int j=0;j<n;j++)
        {
            if(student[j]==std[k])
            {
                sum+=fee[k];
            }
        }
            
        
        
        
    }
    printf("Total fee=%d",sum);
}