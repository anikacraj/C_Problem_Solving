#include<stdio.h>
int main()
{
     int num,i,pw,sum=0;

     printf("Enter an integer number :");
     scanf("%d",&num);

     for(i=1;i<=num;i++)
     {
          sum=(sum+(pow(i,2)));

     }
     printf("\n 1^2 + 2^2 +....SUM = ");
     printf("%d",sum);



     return 0;
}
