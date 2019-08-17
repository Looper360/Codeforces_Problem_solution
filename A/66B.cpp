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
inout
   ll n,mx=1;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
        cin>>a[i];
    for(ll i=0; i<n; i++){
        ll lft=0, rht=0;
        for(ll j=i+1; j<n && a[j-1]>=a[j]; j++)
            lft++;
        for(ll j=i-1; j>=0 && a[j+1]>=a[j]; j--)
            rht++;
        mx=max(mx,lft+rht+1);
    }
    cout<<mx;
//fileclose
}
