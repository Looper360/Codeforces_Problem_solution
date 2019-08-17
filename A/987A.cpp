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

    int n,i;
    string str;

    cin>>n;

        map <string,bool> mp;
        map <string,string> gems;
        map <string,bool> :: iterator it;

        gems["purple"] = "Power";
        gems["green"] = "Time";
        gems["blue"] = "Space";
        gems["orange"] = "Soul";
        gems["red"] = "Reality";
        gems["yellow"] = "Mind";

        mp["purple"] = false;
        mp["green"] = false;
        mp["blue"] = false;
        mp["orange"] = false;
        mp["red"] = false;
        mp["yellow"] = false;

        for (i=1; i<=n; i++)
        {
            cin >> str;
            mp[str] = true;
        }

        cout<<(6-n)<<lne;

        for (it=mp.begin(); it!=mp.end(); it++)
            if (it->second == false)
                cout<<gems[it->first]<<lne;

//fileclose
}
