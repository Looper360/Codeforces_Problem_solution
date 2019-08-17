#include<bits/stdc++.h>
#define ll long long
//#define clr(arr, 0) memset(arr, 0, sizeof(arr))
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
    ll n,i,j;

    cin>>n;
    ll a[n+1];
    ll m = -1;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        m = max(a[i],m);
    }
    ll ans  =  0;
     for(i=0;i<n;i++)
    {
      ans+=(m-a[i]);
    }
    cout<<ans<<endl;
    return 0;

}
