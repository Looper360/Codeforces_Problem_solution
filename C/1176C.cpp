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
inout
    ll num;
    cin>>num;

    ll x, save[100];
    ll arr[6] = {4, 8, 15, 16, 23, 42};

    queue <ll> qt[6];

    save[4] = 0;
    save[8] = 1;
    save[15] = 2;
    save[16] = 3;
    save[23] = 4;
    save[42] = 5;

    for(ll i = 0; i < num; i++){
        cin>>x;
        qt[save[x]].push(i);
    }

    ll cnt = 0;

    while (true){

        ll before = -1;
        bool ck = true;

        for(ll i = 0; i < 6; i++){
            while (!qt[i].empty() && qt[i].front() < before) qt[i].pop();

            if(qt[i].empty()){
                ck = false;
                break;
            }
            before = qt[i].front();
            qt[i].pop();
        }

        if(ck) cnt += 6;
        else break;
    }

    cout<<(num - cnt)<<lne;

    return 0;
}
