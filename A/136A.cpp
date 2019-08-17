#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n,i,temp,p[100];

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>temp;
        p[temp-1]=i+1;
    }

     for(i=0;i<n;i++)
     {
         cout<<p[i]<<" ";
     }
}
