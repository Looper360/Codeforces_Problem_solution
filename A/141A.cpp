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
    string s1, s2, s3, sum ;
    cin>>s1>>s2>>s3 ;
    sum = s1+s2 ;
    sort( sum.begin(),sum.end() ) ;
    sort( s3.begin(),s3.end() ) ;
    if( sum.compare(s3)==0 )
        cout<<"YES" ;
    else
        cout<<"NO" ;
    return 0 ;
}
