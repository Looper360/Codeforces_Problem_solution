#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,z;
    cin>>n>>m>>z;

    int gcd = __gcd(n,m);
    int lcm = (n*m);
    lcm = lcm/gcd;

    //cout<<gcd<<" "<<lcm<<endl;

    int cnt = 0;
    for(int i = lcm; i <= z; i = i+lcm )
    {
        cnt++;
    }

    cout<<cnt<<endl;



}
