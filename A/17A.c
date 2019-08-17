#include<stdio.h>
#include<math.h>

int main()
{
    int n,m,j,i,count,k,ck=0,sum=1,c=0;

    scanf("%d%d",&n,&k);
    count=0;
    for(i=2;i<=n;i++)
    {
        ck=0;

        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)ck=1;

        }
        if(ck==0){
            count++;
            sum+=i;
        }
        if(count>2)
                m=i;
        if(sum==m)c++;
        if(count>3){
                sum=1;
                count=0;
            }
    }
    if(c>=k)printf("YES\n");
    else printf("NO\n");
}
