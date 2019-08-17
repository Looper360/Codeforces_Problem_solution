#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n , t;
    cin>>n>>t;
    int arr[n+1];
    for(int i = 1 ; i <= n ; i++)
            cin >> arr[i];


    bool flag = false;

    for(int i = 1;i <= n;)
    {
        if(i == t)
        {
            flag = true;
            break;
        }
        if(i > t)break;
        i+=arr[i];
        //cout << i << " " << t;
    }
    //if(i == t)
    //cout << i << " " << t;
   if(flag)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

    return 0;
}
