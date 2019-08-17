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
ll arr[102];
int main()

{
    arr[1] = 1;

    for(ll i=2;i<=100;i++)
    {
        for(int j=1;j<i;j++)
        {
            arr[i]=arr[i-1]+(j*4);
        }
    }
    int n;

    cin>>n;

    cout<<arr[n]<<endl;




    return 0;
}
