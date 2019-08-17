#include<bits/stdc++.h>
using namespace std ;
int isPrime(int x)
{
    long long int i,y,ck=0 ;
    y=sqrt(x)+1 ;
    for(i=2; i<=y; i++)
        if(x%i==0)
            ck=1 ;
    return ck ;
}
int main()
{
    long long int n,i,j,k ;
    cin>>n ;

    for(i=4; i<=n/2; i++)
    {
        j=isPrime(i) ;
        k=isPrime(n-i);

        if(j==1 && k==1)
        {
            cout<<i<<" "<<n-i ;
            return 0 ;
        }
    }

}
