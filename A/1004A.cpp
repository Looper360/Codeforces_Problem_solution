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
    int n,d;
    cin>>n>>d;
    vector<ll>vec;
    vector<pair<ll,ll> >p;
    vector<pair<ll,ll> >::iterator it,it1;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
        p.push_back(make_pair(a-d,a+d));
    }
    int cnt=2*n;
    for(it=p.begin();;it++)
    {
        //cout<<"wow";
        it1=it+1;
        if(it1==p.end())break;
        if(it1->fst == it->sec)cnt--;
        else if(it1->fst < it->sec)cnt=cnt-2;
    }
    cout<<cnt<<endl;
    //fileclose
}
