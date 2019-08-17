#include<stdio.h>

int main()
{
    long long int n,m,a,r,c;
    scanf("%lld %lld %lld",&n,&m,&a) ;
    r =  n/a ;
    c =  m/a ;
    if(n%a)
        r++ ;
    if(m%a)
        c++ ;
    printf("%I64d\n",r*c) ;
    return 0 ;
}

