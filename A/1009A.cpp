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
    int arr[n+1];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    queue<int>q;
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        q.push(a);
    }
    int cnt=0;
    for(int i=0;i<n && !q.empty();i++)
    {
        int f=q.front();
       // cout<<f;
        if(f>=arr[i])
        {
            cnt++;
            q.pop();
        }
    }
    cout<<cnt<<lne;

}
