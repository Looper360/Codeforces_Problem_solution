#include<stdio.h>
#include<string.h>

int main()
{
    int x,count=1;

    scanf("%d",&x);

    if(x>=5)
    {
        count=x/5;
        if(x%5!=0)count++;
        printf("%d",count);
    }
    else if(x==1||x==2||x==3||x==4)
        printf("%d",count);
}
