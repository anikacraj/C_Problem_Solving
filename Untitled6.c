#include<stdio.h>
int main()
{
    int i,j,num;
    printf("Enter an integer number :");
    scanf("%d",&num);

    for(i=1; i<=num; i++)
    {
        for(j=1; j<=num-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c",j+64);
        }
        for(j=i-1; j>=1; j--)
        {
            printf("%c",j+64);
        }

        printf("\n");
    }

    for(i=num-1; i>=1; i--)
    {
        for(j=1; j<=num-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c",j+64);
        }
        for(j=i-1; j>=1; j--)
        {
            printf("%c",j+64);
        }

        printf("\n");
    }



}
