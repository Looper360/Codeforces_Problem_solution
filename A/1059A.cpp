#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,L,brk, cnt=0;
    cin>>n>>L>>brk;
    int t=0;
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        cnt=cnt+(x-t)/brk;
        t=x+y;
        if(i==n-1)
            cnt+=(L-t)/brk;
    }
    if(n==0)
        cnt=L/brk;
    cout<<cnt;


}
