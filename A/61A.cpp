#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long int i;
    char s1[1000],s2[1000],s3[1000] ;
    cin>>s1>>s2;

    for( i=0;s1[i]!='\0';i++)
    {
        if(s1[i]==s2[i])
            s3[i]='0' ;
        else
            s3[i]='1' ;

    }
    s3[i]='\0';

    cout<<s3 ;
    return 0 ;
}
