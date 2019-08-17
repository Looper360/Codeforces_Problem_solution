#include<bits/stdc++.h>

using namespace std ;

int main()
{
    long long int n,i,a,count=1,cnt=1;
    vector<int>vec;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a;
       vec.push_back(a);
    }
    for(i=0;i<n;i++)
    {
        if(i!=0){
            if(vec[i]>=vec[i-1])
            {
                count++;
                 if(cnt<count)cnt=count;
            }
            else if(vec[i]<vec[i-1])
            {
                if(cnt<count)cnt=count;
                count=1;
            }
        }
    }
    cout<<cnt;
}
