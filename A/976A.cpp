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
    ll n,cnt=0;
    cin>>n;
    string s,t;
    cin>>s;
    for(ll i=0; i<n; i++)
        if(s[i]=='1') cnt++;
    int zero_cnt=n-cnt;
    if(cnt==0) t="0";
    else if(cnt==1) t=s;
    else
    {
        t="1";
        for(ll i=0; i<zero_cnt; i++)
            t+="0";
    }
    cout<<t<<endl;
    return 0;
}
