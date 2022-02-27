#include<stdio.h>
int bi(int);
void main()
{
    int n,bin;

    printf("Enter N:");
    scanf("%d",&n);

    bin=bi(n);
    printf("binery=%d",bin);

}
int bi(int n)
{
    if (n==0)
    {
        return 0;
    }
    else{
        return (n%2 + 10*bi(n/2));
    }
}
    
