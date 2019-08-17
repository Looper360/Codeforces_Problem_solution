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
int ara[100005];
int main()
{
inout

   ll i,j,k,n,sum1=0,sum2=0;
    cin>>n;
    for(i=1 ; i<=2*n ; i++)
        cin>>ara[i];
    sort(ara+1 , ara+2*n+1);
    for(i=1 ; i<=n ; i++)
        sum1+=ara[i];
    for(i=n+1 ; i<=2*n ; i++)
        sum2+=ara[i];
    if(sum1 == sum2)
        cout<<"-1"<<lne;
    else
    {
        for(i=1 ; i<=2*n ; i++)
           cout<<ara[i]<<" ";
        cout<<lne;
    }
    return 0;

}
