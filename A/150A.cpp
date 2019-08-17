#include<bits/stdc++.h>
#define ll long long
#define clr(arr, false) memset(arr, false, sizeof(arr))
#define vll vector<long long>
#define lne '\n'
#define spc ' '
#define fst first
#define sec second
#define inout ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define fileopen system("input.txt"); freopen("input.txt","r",stdin); FILE *f=freopen("output.txt","w",stdout);
#define fileclose fclose(f); system("output.txt");
using namespace std;

ll p[10000001];
ll n, k;
int main()
{
    cin>>n;
    ll m = n;
    for(ll i=2; i*i<=n; i++)
    {
        while(n%i == 0)
        {
            n /= i;
            p[k++] = i;
        }
    }
    if(n != 1 && n != m)
        p[k++] = n;
    if(k == 2)
        printf("2\n");
    else
        cout<<"1"<<lne<<p[0]*p[1]<<lne;
}
