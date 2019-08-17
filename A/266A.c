#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int n,i,count=0;

    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf(" %c",&s[i]);

    for(i=0;i<n;i++)
    {
        if(s[i]==s[i+1])count++;
    }
    printf("%d",count);

}
