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

int main()
{
    int n,i;

    cin>>n;
    int arr[n+1];
        for (i=0; i<n; i++)
        {
            cin>>arr[i];

            if (arr[i] % 2 == 0)
                --arr[i];
        }

        for (i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";

        }



}
