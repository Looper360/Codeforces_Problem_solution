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
bool prime[ 1500005];
vector <int> v;

void sieve ()
{
    int i,j;

    v.push_back(2);

    for (i=3; i*i<= 1500005; i+=2)
        if (!prime[i])
            for (j=i*i; j< 1500005; j+=2*i)
                prime[j] = true;

    for (i=3; i< 1500005; i+=2)
        if (!prime[i])
            v.push_back(i);
}

int main()
{


    sieve ();

    int n,i;

    cin>>n;

    for (i=0; i<n; i++)
        {
           cout<<v[i]<<" ";
        }



}
