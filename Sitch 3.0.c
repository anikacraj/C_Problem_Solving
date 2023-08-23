#include<stdio.h>
int main()
{
      while(1)
      {


      int a;
      float b,cel,fah;

      printf("Enter 1 for Cel-Fah\n");
      printf("Enter 2 for Fah-cel\n");
      printf("Enter=");

                scanf("%d",&a);

        switch(a)

             {

               case 1:
                printf("Enter the value :");
                scanf("%f",&b);
                fah=((b*9/5)+32);
                printf("Result :%.2f\n",fah);




                case 2:
                printf("Enter the value :");
                scanf("%f",&b);
                cel=((5/9)*b-32);
                printf("Result :%.2f\n",cel);



                default:
                                printf("Error !!!");

        }

      }
   return 0;
}
