#include<bits/stdc++.h>

using namespace std;

int main()
{
    int y,b,Y,G,B,sumall,sum1=0,sum2=0,dif;

    scanf("%d%d%d%d%d",&y,&b,&Y,&G,&B);

    sumall=Y+G+B;

    int a=y/2;
    sum1+=a+y%2;

    int v=b/3;
    sum2+=v+b%3;

    if(sum1+sum2<sumall)
    {
         dif=sumall-(sum1+sum2);

    }
    printf("%d",dif);
}
