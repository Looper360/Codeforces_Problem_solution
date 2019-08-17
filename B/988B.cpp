#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[1000][2000];

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str[i];

    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            if(strlen(str[j])>strlen(str[j+1]))
            {
                swap(str[j],str[j+1]);
            }
        }
    }

    /*for(int i=0;i<=n;i++)
        cout<<str[i]<<"\n";*/

    for(int i=0;i<n;i++)
    {
        if(strstr(str[i+1],str[i]))
        {
            continue;
        }
        else {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<=n;i++)
        cout<<str[i]<<"\n";







}
