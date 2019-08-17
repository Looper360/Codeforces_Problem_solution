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
    vector<int>V;
    int n;
    string s;
    cin>>n>>s;
    for(int i = n; i >= 2; i-- )
         if(n%i==0)V.push_back(i);
    for(int i = V.size()-1; i >= 0; i-- )
    {
        reverse(s.begin(),s.begin()+V[i]);
        //cout<<s<<lne;
    }
    cout<<s<<endl;

//fileclose
}
