#include <bits/stdc++.h>

using namespace std;

int main()
{
    int levels,a;
    cin>>levels;

    int x,y;

    set<int> myset;


    cin>>x;
    for(int j=0;j<x;j++)
    {
        cin>>a;
        myset.insert(a);
    }

    cin>>y;
    for(int i=0;i<y;i++)
    {
         cin>>a;
         myset.insert(a);
    }

    if(myset.size()==levels)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
}
