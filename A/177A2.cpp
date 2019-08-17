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
    ll n;
    cin>>n;
    ll ara[n][n],mat[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ara[i][j];
            mat[i][j]=0;
        }

    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==(n/2))
            {
                mat[i][j]=1;
            }

            else if(j==(n/2))
            {
                mat[i][j]=1;
            }
            else if(i==j)
            {
                    mat[i][j]=1;
            }
            else if((i+j)==(n-1))
            {
                mat[i][j]=1;
            }

        }
    }
    ll sum=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(mat[i][j]==1)
                {
                    sum+=ara[i][j];
                }
        }
    }

    cout<<sum<<lne;

}
