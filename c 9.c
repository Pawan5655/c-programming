#include<stdio.h>
void main()
{
    int n,a,b,c,sum;
    printf("add three number");
    scanf("%d",&n);
    a=n/100;
    b=(n%100)/10;
    c=n%10;
    sum=a*a*a+b*b*b+c*c*c;
    printf("%d",sum);
    if(n==sum)
    {
        printf(" given number is armstrong no ");

    }
    else
    {
        printf("given number is not armstrong no ");
    }



}
