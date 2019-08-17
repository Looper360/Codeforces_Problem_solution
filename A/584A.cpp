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
    int n,t,i;
    cin>>n>>t;
    if(t==10){
        if(n==1){
            cout<<-1<<endl;
        }
        else{
            for(i=0;i<n-1;i++){
                cout<<1;
            }
            cout<<0<<endl;
        }
    }
    else{
        for(i=0;i<n;i++){
            cout<<t;
        }
        cout<<endl;
    }
}
