#include<stdio.h>
#include<math.h>
long long binary(long long);
long long oct(long long);
long long hexa(long long);
void main()
{
    int op;
    long long n;

    printf("Enter N:");
    scanf("%lld",&n);

    printf("1 for binary\n");
    printf("2 for octadecimal\n");    
    printf("3 for hexadecimal\n");   

    scanf("%d",&op);

    switch (op)
    {
        case 1:
            printf("binary=%lld",binary(n));
            break;

        case 2:
            printf("octal=%lld",oct(n));
            break;

        case 3:
            printf("hexa=%lld",hexa(n));
    }
    
}
long long binary(long long x)
{
    int arr[100],i,j;
    long long b=0;
    for(i=0;x>0;i++)
    {
        arr[i]=x%2;
        x=x/2;
    }
    for(j=i-1;j>=0;j--)
    {
        b=(b*10)+arr[j];
    }
    return b;
}
long long oct(long long x)
{
    int on=0,i=1;
    while(x!=0)
    {
        on+=(x%8)*i;
        x/=8;
        i*=10;
        
    }
    return on;
}
long long hexa(long long x)
{
     int i=1;
     long long hexa=0;

    while(x!=0)
    {
        hexa+=(x%16)*i;
        x/=16;
        i*=10;
        
    }
    return hexa;
}


    

    
    
