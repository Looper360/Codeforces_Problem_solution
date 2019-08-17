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
    int n;
    cin>>n;
    int cnt=n;

    if(n==1)cout<<"1"<<lne;
    else{
            for(int i=1;i<n;i++)
            {
                cnt+=(n-i)*i;

            }
            cout<<cnt<<lne;
    }

//fileclose
}
