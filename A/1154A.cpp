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
    ll arr[4];

    for(ll i = 0; i < 4; i++){
        cin>>arr[i];
    }

    sort(arr, arr + 4);

    ll a = arr[3] - arr[0];
    ll b = arr[3] - arr[1];
    ll c = arr[3] - arr[2];

    cout << a << " " << b << " " << c << endl;

}
