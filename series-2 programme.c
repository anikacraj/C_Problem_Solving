#include<stdio.h>
int main()
{
     int num1,num2,sum=0,a=1,b=2;
     printf("Enter two value :");
     scanf("%d %d",&num1,&num2);


     while(a<=num1 && b<=num2)
     {
          sum=a*b;
          a+=1;
          b+=1;

     }
     printf("\n1.2 + 2.3 + 3.4...SUM = ");
     printf("%d",sum);

     return 0;
}
