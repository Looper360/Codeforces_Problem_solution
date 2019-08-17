
#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std ;

int main()
{
    int i,k;
    char s[100], test[10]="hello" ;

    gets(s) ;
    strlwr(s) ;

    for(i=0,k=0;s[i]!='\0';i++ )
    {
        if(s[i]==test[k])
            k++ ;
    }

    if(k==5) cout<<"YES" ;
    else cout<<"NO" ;

}
