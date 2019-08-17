#include<bits/stdc++.h>
#define ll long long
#define vll vector<long long>
#define lne '\n'
#define spc ' '
#define fst first
#define sec second
#define inout ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define fileopen system("input.txt"); freopen("input.txt","r",stdin); FILE *f=freopen("output.txt","w",stdout);
#define fileclose fclose(f); system("output.txt");
using namespace std;

int gcd(int a, int b)
{
	if(b == 0)
	{
	        return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}
int main()
{
inout
   int a,a1,b,b1,n;

        cin>>a>>b>>n;
        while( n>0)
        {

        a1=gcd(a,n);
        n=n-a1;
        if ( n<=0) {cout<<"0"<<endl; return 0;}
        b1=gcd(b,n);
        n=n-b1;
         if ( n<=0) {cout<<"1"<<endl; return 0;}
        }

        return 0;
 }


