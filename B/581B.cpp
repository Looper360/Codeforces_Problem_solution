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
   ll n;
   cin>>n;
   vector<ll>vec;
   for(ll i=0;i<n;i++)
   {
       ll a;
       cin>>a;
       vec.push_back(a);
   }
   ll m=-1;
   list<ll>mylist;
   for(ll i=vec.size()-1;i>=0;i--)
   {
       if(vec[i]>m)
       {
           m=vec[i];
           mylist.push_front(0);
       }
       else if(vec[i]<=m)
       {
          ll var=(m-vec[i])+1;
          mylist.push_front(var);
       }
   }
   for(auto x:mylist)
   {
       cout<<(x)<<" ";
   }
}
