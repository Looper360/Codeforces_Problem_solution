#include<bits/stdc++.h>

using namespace std ;

int main()
{
    char s[100];
    int i,n,j,a[100],year;

    cin>>n;

    for(i=n+1;;i++)
    {
        year=i;
        for(j=0;j<4;j++)
        {
            a[j]=year%10;
            year=year/10;

        }
        if(a[0]!=a[1] && a[0]!=a[2] && a[0]!=a[3] && a[1]!=a[2] && a[1]!=a[3] && a[2]!=a[3])
             {
                 break;
             }
    }

    cout<<i;

    return 0;
}
