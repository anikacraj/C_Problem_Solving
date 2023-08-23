#include<stdio.h>
int main()
{
    char a;
    printf("Enter any letter : ");
    scanf("%c",&a);

    switch(a)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    {
        printf("\n Vowel ");
        break;
    }

    default:
        printf("\n Consonant ");

    }



    return 0;
}
