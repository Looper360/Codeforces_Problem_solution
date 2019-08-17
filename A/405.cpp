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
int main() {
    int i,n,num;

    cin>>n;

    vector <int> v;
    for (i=0;i<n;i++) {
        cin>>num;
        v.push_back(num);
    }

    sort (v.begin(),v.end());

    for(auto x:v)
    {
        cout<<x<<" ";
    }
    puts("");

    return 0;
}
