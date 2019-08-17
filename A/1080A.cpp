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
inout
    ll n,k, ans=0;
    cin>>n>>k;
    ll x=2*n, y=5*n, z=8*n;

    if(x%k!=0)
    {
        ans +=x/k+1;
    }
    else
    {
        ans +=x/k;
    }
    if(y%k!=0)
    {
        ans += y/k+1;
    }
    else
    {
        ans +=y/k;
    }
    if(z%k!=0)
    {
          ans +=  z/k+1;
    }
    else
    {
        ans +=z/k;
    }
    cout<<ans;
}
