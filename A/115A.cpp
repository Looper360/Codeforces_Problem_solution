#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, Count=0;

    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        while(arr[i]!=-1)
        {
            Count++;

        }
    }

    cout<<Count;
}
