#include<stdio.h>
int main()
{
    float a,b;
    printf("enter the value :");
    scanf("%f",&a);
    b=sin(a);
    printf("Sin(%f)  : %2.f",a,b);
    return 0;
}
