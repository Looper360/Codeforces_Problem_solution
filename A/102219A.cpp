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
int n;
void print(string str[])
{
    cout<<lne<<lne;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<str[i][j];

        }
        cout<<lne;
    }
}
int main()
{
inout
    string s;
    cin>>n>>s;
    string str[n],mat[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>str[i][j];

        }
    }
    ll rotate_right_cnt=0;
    ll rotate_left_cnt=0;
    for(int k=0;k<s.size();k++)
    {
        if(s[k]=='R')
        {
            rotate_right_cnt++;
        }
        else{
            rotate_left_cnt++;
        }
    }
    rotate_right_cnt=rotate_right_cnt%4;
    rotate_left_cnt=rotate_left_cnt%4;
    if(rotate_right_cnt==1)
    {
        for(int i=n-1,k=0;i>=0;i--,k++)
        {
            for(int j=0;j<n;j++)
            {
                mat[j][k]=str[i][j];
            }
        }
        print(mat);
    }
}
