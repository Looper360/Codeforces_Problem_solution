#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,ck=1;

    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        if(ck==0 && i%2==0)ck=1;
        else if(ck==1 && i%2==0)ck=0;
        for(int j=1;j<=m;j++)
        {
            if(i%2!=0)
            {
                cout<<"#";
            }
            else if(i%2==0)
            {
                if(j==1 && ck==1) cout<<"#";
                else if(j==m && ck==0) cout<<"#";
                else cout<<".";
            }
        }
        cout<<endl;
    }
}
