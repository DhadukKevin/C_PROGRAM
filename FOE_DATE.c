#include<stdio.h>
void main()
{
    char date[10];
    char op,po;
    
    printf("enter date as dd/mm/yyyy form:");
    scanf("%s",&date);

    po=date[3];
    op=date[4];

    if(po=='0')
    {
        switch (op)
        {
            case '1':
                printf("jan");
                break;
            case '2':
                printf("feb");
                break;
            case '3':
                printf("march");
                break;
            case '4':
                printf("apr");
                break;
            case '5':
                printf("may");
                break;
            case '6':
                printf("june");
                break;
            case '7':
                printf("july");
                break;
            case '8':
                printf("aug");
                break;
            case '9':
                printf("sep");
                break;
        }
    }  
    else
    {
        switch (op)
        {
            case '0':
                printf("oct");
                break;
            case '1':
                printf("nov");
                break;
            case '2':
                printf("dec");
                break;
        }
    }

    printf("%c%c%c%c%c%c%c%c",date[5],date[0],date[1],date[2],date[6],date[7],date[8],date[9]);
}