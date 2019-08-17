#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n,i,k,j1,j2,test=0 ;
    cin>>n ;
    int a[n],b[n] ;

    for(i=0; i<n; i++)
    {
        cin>>a[i]>>b[i] ;

    }

    for(i=0; i<n; i++)
    {
        for(k=0; k<n; k++)
            if(a[i]==b[k])
                    test++ ;
    }
    cout<<test ;
    return 0 ;
}
