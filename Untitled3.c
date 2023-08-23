#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,div,rim;
    float avg;
    printf("enter two intejer number =");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);
    sub=a-b;
    printf("sub=%d\n",sub);
    mul=a*b;
    printf("mul=%d\n",mul);
    div=a/b;
    printf("div=%d\n",div);
    rim=a%b;
    printf("rim=%d\n",rim);
    avg=(float)sum/2;
    printf("avg=%.2f\n",avg);
    getch();
}
