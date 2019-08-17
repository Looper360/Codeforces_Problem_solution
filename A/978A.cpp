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
    vector<ll> v(1001,0), fck, str;
    ll n,cnt=0;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        ll tem;
        cin>>tem;
        fck.push_back(tem);
        v[tem]++;
        if(v[tem]==1) cnt++;
    }
    cout<<cnt<<lne;
    for(ll i=fck.size()-1; i>=0; i--)
        if(v[ fck[i] ]>0){
            str.push_back(fck[i]);
            v[ fck[i] ]=0;
        }
    for(ll i=str.size()-1; i>=0; i--)
        cout<<str[i]<<' ';
    return 0;
}
