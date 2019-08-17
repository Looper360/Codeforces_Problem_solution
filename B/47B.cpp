#include <bits/stdc++.h>

using namespace std;

int main()
{
    string t;
    int A=0,B=0,C=0;
    map<int ,char>M;
    map<int ,char>::iterator it;

    for(int i=0;i<3;i++)
    {
        cin>>t;

       if(t[1]=='>')
       {
           if(t[0]=='A' && t[2]=='B')
           {
               A++;B--;
           }
           if(t[0]=='B' && t[2]=='C')
           {
               B++;C--;
           }
           if(t[0]=='A' && t[2]=='C')
           {
               A++;C--;
           }
           if(t[0]=='C' && t[2]=='A')
           {
               C++;A--;
           }
           if(t[0]=='C' && t[2]=='B')
           {
               C++;B--;
           }
           if(t[0]=='B' && t[2]=='A')
           {
               B++;A--;
           }

       }
       else if(t[1]=='<')
       {
           if(t[0]=='A' && t[2]=='B')
           {
               A--;B++;
           }
           if(t[0]=='B' && t[2]=='C')
           {
               B--;C++;
           }
           if(t[0]=='A' && t[2]=='C')
           {
               A--;C++;
           }
           if(t[0]=='C' && t[2]=='A')
           {
               C--;A++;
           }
           if(t[0]=='C' && t[2]=='B')
           {
               C--;B++;
           }
           if(t[0]=='B' && t[2]=='A')
           {
               B--;A++;
           }
       }
    }
    if(A==0 && B==0 && C==0)cout<<"Impossible"<<endl;
    else
    {
       M[A]='A';
       M[B]='B';
       M[C]='C';

       for(it=M.begin();it!=M.end();it++)
                cout<<it->second;

    }






}
