#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string,bool>M;
    map<string,bool>::iterator it;

    int n,h,m,cnt=1,cash=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {

        cin>>h>>m;
        string h1=to_string(h);
        string m1=to_string(m);

        string time=h1+m1;

        if(M[time])
        {
            cnt++;
            if(cnt>cash)cash=cnt;
        }
        else {
            cnt=1;
            M[time]=true;

        }
       // for(it=M.begin();it!=M.end();it++)
         //   cout<<(it->first)<<endl;

    }
    cout<<cash<<endl;

}
