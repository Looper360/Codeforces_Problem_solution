#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std ;

int main()
{
    int n,ck=1;
    char str[30];

    cin>>n;
    sprintf(str,"%d",n);

    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]!='4' && str[i]!='7')
        {
            ck=0;
        }
    }
    if(ck==1 || n%4==0 || n%7==0 || n%44==0 || n%47==0 || n%74==0 || n%77==0)
    {
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";
}
