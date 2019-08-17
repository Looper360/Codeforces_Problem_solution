#include<bits/stdc++.h>
#define ll long long
#define vll vector<long long>
#define lne '\n'
#define spc ' '
#define fst first
#define sec second
#define inout ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define fileopen system("input.txt"); freopen("input.txt","r",stdin); FILE *f=freopen("output.txt","w",stdout);
#define fileclose fclose(f); system("output.txt");


using namespace std;

int main()
{
    int n,k=0,sum=0;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>k)k=arr[i];
        sum+=arr[i];
    }


    while(1)
    {
        int sum1=0;
         vector<int>vec;
         for(int j=0;j<n;j++)
         {
                int a=k-arr[j];
                vec.push_back(a);
                sum1+=a;
        }
        if(sum1>sum)break;
        k++;
    }
    cout<<k<<lne;


}
