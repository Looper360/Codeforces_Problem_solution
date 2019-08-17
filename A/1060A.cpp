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
    int ln,n;
    string str;
    cin>>ln;
    cin>>str;
    if(ln>=11)
    {
         n=ln/11;
         int cnt=count(str.begin(),str.end(),'8');
         if(cnt>=n)cout<<n<<lne;
         else cout<<cnt<<lne;
    }
    else cout<<"0"<<lne;


}
