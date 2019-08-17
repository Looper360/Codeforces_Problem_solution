#include<stdio.h>

int main()
{
    int a,b,sum,t;

    scanf("%d%d",&a,&b);

    sum=a;

    while(a>=b)
    {
        t=a/b;
        sum=sum+t;
        a=t+a%b;
    }
    printf("%d",sum);
}
