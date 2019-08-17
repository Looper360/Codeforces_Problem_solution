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

   ll n,eve=0,odd=0,j=1;
	cin>>n;
	ll a[n];
	n=n/2;
	for(ll i=0; i<n; i++){
        cin>>a[i];
	}
	sort(a,a+n);
	for(ll i=0; i<n; i++){
        eve+=abs(a[i]-j);
        odd+=abs(a[i]-j-1);
        j+=2;
	}
	cout<<min(eve,odd);

}
