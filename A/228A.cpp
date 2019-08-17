#include <bits/stdc++.h>

using namespace std;

int main()
{

    set<int>S;
    vector<int>vec;
    for(int i=0;i<4;i++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
        S.insert(a);

    }
    int num=vec.size()-S.size();

    cout<<num<<endl;

}
