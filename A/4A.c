#include<stdio.h>

int main()
{
    int w,i,j;
    scanf("%d",&w);

    for(i=2;i<=w;i=i+2)
    {
        for(j=2;j<=w;j=j+2)
        {
           if(i+j==w){
                printf("Yes\n");
                return 0;
           }
        }
    }
    printf("No\n");
}
