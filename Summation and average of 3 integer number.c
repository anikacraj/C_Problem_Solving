//write a program that takes three numbers and display there summation and average
 #include <stdio.h>
int main()
{
    int a,b,c,sum;
    float avg;
    printf("Enter three numbers=");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    avg=(float)sum/3;
    printf("\n The summation is =%d",sum);
    printf("\n The average is =%.2f",avg);
    getch();



}
