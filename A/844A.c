#include<stdio.h>
#include<string.h>

int main()
{
    char s[10000],s1[10000],ch;
    int k,ln,i,r,count,j,ln1;

    gets(s);
    scanf("%d",&k);

    ln=strlen(s);

    j=0;
    for(ch='a';ch<='z';ch++){
            count=0;
        for(i=0;i<ln;i++)
        {
        if(ch==s[i])
            {
                count++;
                if(count==1){
                        s1[j]=s[i];
                        j++;
                }
            }
        }
    }
    s1[j]='\0';

    ln1=strlen(s1);

    //printf("%d",ln1);  //ln1 =number of differrent characters in a string
    if(k>ln){
        printf("impossible");
        return 0;
    }

    else
    {
        r=k-ln1;
        if(r<0)printf("0\n");

        else printf("%d",r);
    }



}
