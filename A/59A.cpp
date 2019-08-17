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
   string str;

    getline(cin,str);
 int i,j,lc=0,up=0;

 for(i=0;i<str.size();i++)
 {
   if(str[i]>='A' && str[i]<='Z')
     up++;

   else if(str[i]>='a' && str[i]<='z')
     lc++;
 }

 if(up>lc)
        transform(str.begin(),str.end(),str.begin(),::toupper);
 else if(lc>=up)
        transform(str.begin(),str.end(),str.begin(),::tolower);

  cout<<str;

  return 0;
}
