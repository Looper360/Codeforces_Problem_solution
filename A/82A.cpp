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

    int i,j=5,k=1,n,seq ;
    cin>>n ;
    string s[5]={"Sheldon","Leonard","Penny","Rajesh","Howard"} ;
    while(j<n)
    {
        n=n-j ;
        j=j*2 ;
        k=k*2 ;
    }
    seq=(int)(n-1)/k ;
    cout<<s[seq];

}
