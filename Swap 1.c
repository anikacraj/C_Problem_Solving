#include<stdio.h>
int main()
{
    int num1=10;
    int num2=20;

    int tem;
    tem=num1;
    num1=num2;
    num2=tem;
    printf("\n Num1=%d",num1);
    printf("\n Num2=%d",num2);
}
