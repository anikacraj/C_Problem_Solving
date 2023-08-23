#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer number : ");
    scanf("%d",&n);

    if(n==1 ||(n-1)%7==0)
    {
        printf("\nSaturday");
    }
    else if(n==2 ||(n-2)%7==0)
    {
        printf("\nSunday");
    }
    else if(n==3 ||(n-3)%7==0)
    {
        printf("\nMonday");
    }
    else if(n==4 ||(n-4)%7==0)
    {
        printf("\nTuesday");
    }
    else if(n==5 ||(n-5)%7==0)
    {
        printf("\nWednesday");
    }
    else if(n==6 ||(n-6)%7==0)
    {
        printf("\nThursday");
    }
    else
        printf("\nFriday");



    return 0;
}
