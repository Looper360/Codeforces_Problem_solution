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

void CountingFrequencyOfIntegers( multiset <int> s)
{
     int cnt=1;
     multiset <int> :: iterator it;

     map <int,int> m;
     map <int,int> :: iterator mt;

/*
      for (it = s.begin();it!=s.end();it++) {
            cout<< *it << " ";
        }*/
    //puts("");
    int num;
    for (it = s.begin(),num = *it,it++;;it++) {
       // cout<<*it;
        if (num==*it) {
            cnt++;
            num = *it;
            //printf("if\n");
        }

        else {
            m.insert(make_pair(num,cnt));
           // cout<<num<<"--"<<cnt<<endl;
            num = *it;
            cnt=1;
            //printf("else\n");
        }
        if(it==s.end())
        {
            m.insert(make_pair(num,--cnt));
            break;
        }
    }
    int MAX=0;
    for (mt = m.begin();mt!=m.end();mt++) {
          MAX=max(MAX,mt->sec);
          //cout<< mt->first << "\t" << mt->second << endl;
    }
    cout<<MAX<<lne;
   // puts("");
}
int main()
{
   // fileopen

    int n;
    cin>>n;
    multiset <int> s;

   for(int i=0;i<n;i++)
    {
            int a;
            cin>>a;
            s.insert(a);
        }
        if(n==1)cout<<"1"<<lne;
        else{
            CountingFrequencyOfIntegers(s);
        }
//fileclose
}
