#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n,i,sum=0,cnt=0,temp=0;

    scanf("%d",&n);
    for(i=1;;i++)
    {
        sum+=i;
        temp+=sum;
        if(temp>n)break;
        cnt++;
    }
    printf("%d\n",cnt);
}
