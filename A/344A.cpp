#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n,count=0;
    char c='0';
    string s;

    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s[0]!=c)
        {

            count++;
        }
        c=s[0];
    }
    cout<<count;

}
