#include<iostream>
using namespace std ;

int main()
{
    char s[100] ;
    cin>>s ;

    int ck=0 ;

    for(int i=0;s[i]!='\0';i++)
        {
        if( s[i]=='H' || s[i]=='Q' || s[i]=='9') ck=1 ;

    }
    if(ck)
        cout<<"YES" ;
    else
        cout<<"NO" ;
    return 0 ;
}
