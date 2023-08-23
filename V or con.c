#include<stdio.h>
int main()
{
     int a;
     printf("Enter any letter :");
     scanf("%c",&a);

     if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
     {
          printf("\n Vowel");
     }
     else
          printf("\n Consonant");


     return 0;
}
