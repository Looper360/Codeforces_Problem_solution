#include<bits/stdc++.h>

using namespace std;

bool isVowel(char ch) {

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')

         return true;

    else return false;

}

int main()
{
    char str[1000];
    cin>>str;
    int ck=0;
    for(int i=0;i<strlen(str);i++)
    {

        if(str[i]!='n' && !isVowel(str[i]) && isVowel(str[i+1]))
        {
            ck=1;
        }

        else if(isVowel(str[i]))ck=1;
        else if(str[i]=='n')ck=1;
        else {
            ck=0;
            break;
        }

    }
    if(ck)cout<<"YES\n";
    else cout<<"NO\n";
}
