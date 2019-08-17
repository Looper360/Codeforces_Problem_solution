#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long int n,i,x=0;

    cin>>n;

    while(n>0){
        if(n%2!=0){
            x++;
            n--;
        }
        else{
            n/=2;
        }
    }
    printf("%d\n",x);
    return 0;
}
