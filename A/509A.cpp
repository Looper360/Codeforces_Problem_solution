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
int g[11][11];
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        g[1][i]= 1;

    for(int i= 2; i<= n; i++){
        for(int j= 1; j<= n; j++){
            g[i][j]= g[i-1][j]+g[i][j-1];
        }

    }

    cout<< g[n][n] <<endl;

    return 0;
}
