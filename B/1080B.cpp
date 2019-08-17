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
    int q,i;
    ll x,y,a,b,result;

    cin>>q;

    for (i=1; i<=q; i++)
    {
        cin>>x>>y;

        ll result;
        ll d = y - x +1;

        if(x%2!=0  && d%2==0)
        {
            result=d/2;
        }

        if(x%2!=0 && d%2!=0)
        {
            result=(d/2-y);
        }

        if(x%2==0 && d%2==0)
        {
            result= -1*d/2 ;
        }

        if(x%2==0 && d%2!=0)
        {
            result=x + d/2;
        }
        cout <<result  << endl;


    }
}
