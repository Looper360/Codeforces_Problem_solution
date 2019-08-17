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
int a,b,c;
int DP[4001];
int solve(int n){
if(n == 0)return 0;
if(n<0) return INT_MIN;
if(DP[n] != -1)return DP[n];
else{
   DP[n] = max(1+solve(n-a),max(1+solve(n-b),1+solve(n-c)));
return DP[n];
}
}
int main(){
int n,x;
cin>>n>>a>>b>>c;
for(int i = 0;i<=n;++i){
DP[i] = -1;
}
x = solve(n);
cout<<x;
}
