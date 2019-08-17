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
    //fileopen
    int n,k;
    cin>>n>>k;
    vector<int>vec,index;
    map<int,bool>mp;

    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
        if(!mp[a])
        {
            index.push_back(i);
            mp[a]=true;
        }
    }
    if(mp.size()<k)cout<<"NO"<<lne;
    else{
        cout<<"YES"<<lne;
        for(int i=0;i<k;i++)
            cout<<index[i]<<" ";
    }

//fileclose
}
