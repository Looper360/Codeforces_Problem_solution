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
int main() {

    vector <int> v1,v2,v3,v;

    int n,i,num;

    cin>>n;

    for (i=1;i<=n;i++) {
        cin>>num;

        if (num==1) {
            v1.push_back(i);
        }

        else if (num==2) {
            v2.push_back(i);
        }

        else if (num==3) {
            v3.push_back(i);
        }

    }

    v.push_back(v1.size());
    v.push_back(v2.size());
    v.push_back(v3.size());

    sort(v.begin(),v.end());

    if(v1.size()==0 || v2.size()==0|| v3.size()==0)
    {
       cout<<v[0]<<endl;
    }
    else
    {
        cout<<v[0]<<endl;
        for (i=0;i<v[0];i++) {
            cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<" "<<endl;
        }
    }
    return 0;
}
