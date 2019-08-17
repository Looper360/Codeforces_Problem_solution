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
    string s, t;
	cin >> s >> t;
	while ( s.size() != 0 && t.size() != 0 ) {
		if ( s.back() == t.back() ) {
			s.pop_back();
			t.pop_back();
		}
		else break;
	}
	cout << s.size()+t.size() << lne;

}
