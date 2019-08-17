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

 int n,k;


int main()
{
inout
     ll n,k, tem, mx=0;
    cin>>n>>k;
    map<ll,ll> m;
    for(ll i=0; i<n; i++){
        cin>>tem;
        m[tem]++;
        mx=max(m[tem],mx);
    }
    ll x=mx/k, y=m.size();
    if(mx%k) x++;
    cout<<abs(n-x*k*y);
}
