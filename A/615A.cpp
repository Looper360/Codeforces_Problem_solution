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
    int n,m;
    cin>>n>>m;
    int ara[m+1]={0};
    for(int i=0;i<n;i++)
    {
        int cb;
        cin>>cb;
        for(int j=0;j<cb;j++)
        {
            int a;
            cin>>a;
            ara[a]=1;
        }
    }
    for(int i=1;i<=m;i++)
    {
        if(ara[i]==0)
        {
            cout<<"NO"<<lne;
            return 0;
        }
    }
    cout<<"YES"<<lne;
}
