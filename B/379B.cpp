#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,sum=0;
    bool left=0,right=1;

    cin>>n;
    int arr[n+1];
    for(i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
        }
    i=0;
    while(1){
        if(arr[i]!=0)
        {
            cout<<"P";
            arr[i]--;
            sum--;
            if(sum==0)break;
        }
        if(right && i<n)
        {
            i++;
            cout<<"R";
            if(i==n-1){
                right=0;
                left=1;
            }
        }
         else if(left && i>=0)
        {
            i--;
            cout<<"L";
            if(i==0){
                right=1;
                left=0;
            }
            }
    }
}
