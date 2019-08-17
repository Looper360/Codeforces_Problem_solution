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
    int n,m;
    cin>>n>>m;
    vector<int>vec;
    map<int,bool>M;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
    }
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        M[a]=true;
    }
    for(int i=0;i<vec.size();i++)
    {
        if(M[vec[i]])cout<<vec[i]<<" ";
    }


    //fileclose
}
