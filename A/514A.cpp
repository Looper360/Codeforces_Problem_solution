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

   string x,result;
   cin>>x;
   for(int i=0;i<x.size();i++)
   {
       int num=x[i]-48;
       if(num>=5 )
       {
           if(i==0 && num==9)
           {
               result+=to_string(num);
           }
           else{
                int p=9-num;
               string str=to_string(p);
               result+=str;
           }

       }
       else {
           result+=to_string(num);
       }

   }
   cout<<result<<lne;
}
