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
    ll n,l,i,maxx=0;
    double x,y,z,ans;
    cin>>n>>l;
    ll a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0; i<n-1; i++)
    {
        if(a[i+1]-a[i]>maxx)
            maxx=a[i+1]-a[i];
    }
    x=maxx/2.0;

    y=a[0]-0.0;
    z=(double)l-a[n-1];

    ans=max(y,z);
    ans=max(ans,x);
    printf("%.10f\n",ans);

}
