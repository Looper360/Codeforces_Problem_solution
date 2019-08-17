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
      int n;
    cin >> n;
    string str=to_string(n);
   // string s=str;
    if (n >= 0)
    {
        cout << n << endl;
    }
    else
    {
         int a = n / 10;
         str[str.size()-2]=str[str.size()-1];
         str[str.size()-1]=str[str.size()];
         int b=stoi(str);
         //cout<<a<<" "<<b<<lne;
         int MAX=max(a,b);
         cout<<MAX<<lne;
    }
}
