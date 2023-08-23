#include<stdio.h>
int main()
{
     char a;
     printf("enter any letter  :");
     scanf("%c",&a);

     switch(a)      // Switch keyword
     {
          case 'a':
          case 'e':      //case keyword
          case 'i':
          case 'o':
          case 'u':
          case 'A':
          case 'E':
          case 'I':
          case 'O':
          case 'U':
          printf("Vowel\n");
          break;              //break kyeword

          default:       //default kyeword
               printf("Consonant\n");


     }


     return 0;
}
