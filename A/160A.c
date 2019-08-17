#include<stdio.h>

int main()
{
    int n,sum=0,i,j,temp,sum1=0,count=0;

    scanf("%d",&n);
    int a[n];   // number of coins

    for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            sum+=a[i];      //summing all value of coins
    }

    //sorting the value of coins in ascending order
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }

    for(i=n-1;i>=0;i--)
    {
        sum1+=a[i];
        count++;
        if(sum1>sum/2)break;
    }
    printf("%d",count);

}
