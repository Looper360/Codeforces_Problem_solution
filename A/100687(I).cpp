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


    int n;
    cin>>n;

    int ck=1;
    while(n--)
    {
        int h1,m1,s1,h2,m2,s2;
        scanf("%d%*c%d%*c%d %d%*c%d%*c%d",&h1,&m1,&s1,&h2,&m2,&s2);

        int h;
        if(h2>=h1)h=(h2-h1);
        else h=(24+h2-h1);
        //cout<<h1<<m1<<s1<<h2<<m2<<s2;
        if(h<3)
        {
            ck=1;
        }
        else
        {
            if(m2>m1){
                  ck=0;
            }
            if(m2==m1)
            {
                if(s2<s1)ck=1;
                else ck=0;
            }
            else ck=1;
        }


    }
    if(ck==1)cout<<"Yes"<<lne;
    else cout<<"No"<<lne;
}
