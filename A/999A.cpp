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
inout
    //fileopen
    int n,k,i,val;

    cin>>n>>k;

        deque <int> d;

        for (i=0; i<n; i++)
        {
            cin>>val;
            d.push_back(val);
        }

        int ans=0;

        while (1)
        {
            if ((d.front() > k && d.back() > k) || d.empty())
                break;
            if (d.front() <= k)
            {
                d.pop_front();
                ++ans;

                if (d.empty())
                    break;
            }
            if (d.back() <= k)
            {
                d.pop_back();
                ++ans;

                if (d.empty())
                    break;
            }
        }

      cout<<ans<<lne;




//fileclose
}
