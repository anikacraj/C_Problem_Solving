#include<stdio.h>
int main()
{
     float a,b,c;
     printf("Enter three number :");
     scanf("%f %f %f",&a,&b,&c);

     if(a>b && a>c)
     {
          printf("\n %.1f is large",a);
     }
     else if(b>c)
     {
          printf("\n %.1f is large",b);
     }
     else
     {
          printf("\n %.1f is large");
     }

     return 0;
}
