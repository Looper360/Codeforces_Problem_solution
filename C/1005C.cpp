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
    long int n;
    cin>>n;
    vector<ll>vec;
    map<ll,bool>SUM;
    multimap<ll,bool>element;
    map<ll,bool>::iterator mt;

    for(int i=1;i<=32;i++)
    {
        SUM[pow(2,i)]=true;
    }

    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        vec.push_back(a);
        element[a]=true;
    }

    if(n==1)cout<<"1"<<lne;
    else{
        int cnt=0;
        int i;
        for(mt=SUM.begin(), i=0;i<vec.size();)
        {
            element[vec[i]]=false;
            if(element[(mt->fst) - vec[i]])
            {
                i++;
                mt=SUM.begin();
                 element[vec[i]]=true;
            }
            else mt++;
            if(mt==SUM.end())
            {
                cnt++;
                //cout<<i<<endl;
                i++;
                mt=SUM.begin();
            }
        }
            cout<<cnt<<lne;
    }

}
