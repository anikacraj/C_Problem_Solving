#include<stdio.h>
int main()
{
    char name;
    printf("Enter your first name in small letter   :");
    scanf("%c",&name);
    printf("Your name in capital letter :%c",name-32);
    return 0;

}
