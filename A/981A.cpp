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
bool isPalin (char str[],int len)
{
    int i,h=len/2;
    --len;

    for (i=0; i<h; i++)
        if (str[i] != str[len-i])
            return false;

    return true;
}

int retLen (char str[],int len)
{
    if (len == 0)
        return 0;

    if (isPalin(str,len))
        retLen(str,--len);
    else
        return len;
}

int main ()
{
    inout

    char str[50];
    int len,i;

    cin>>str;

    len = strlen(str);

    printf("%d\n",retLen(str,len));


    return 0;
}
