#include<stdio.h>
#include<string.h>

int main()
{
    int n,x=0,i ;
    char b[5];

    scanf("%d",&n) ;
    for(i=1;i<=n;i++)
    {
        scanf("%s",b);
        if(b[1]=='+') x++ ;
        else x-- ;
    }
    printf("%d\n",x) ;
    return 0 ;
}
