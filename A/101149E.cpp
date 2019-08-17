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
#define maxn 222222
int n,l[maxn],r[maxn];
int main()
{
        scanf("%d",&n);

        for(int i=0;i<n;i++)
            scanf("%d%d",&l[i],&r[i]);
        int Min=l[0];
        for(int i=1;i<n;i++)
            Min=max(Min,l[i]);
        int ans=0;
        for(int i=0;i<n;i++)
            if(r[i]>=Min)ans++;
        printf("%d\n",ans);

}
