#include<stdio.h>
#include<math.h>

int main()
{
    int n,m,j,i,count,ck=0;

    scanf("%d%d",&n,&m);
    count=0;
    for(i=n+1;i<=m;i++)
    {
        ck=0;

        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)ck=1;

        }
        if(ck==0)count++;
    }
    if(count==1 && ck==0)
        printf("YES\n");
    else
        printf("NO\n");

}
