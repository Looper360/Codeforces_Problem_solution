#include<stdio.h>
#include<string.h>

int main()
{
    int i,ln,count,n;
    char s[100];

    scanf("%d ",&n);
    while(n--){
    count=0;
    scanf(" %s",s);
    ln=strlen(s);
    for(i=1;i<ln-1;i++)
    {
        count++;
    }

    if(ln>10)
        printf("%c%d%c\n",s[0],count,s[ln-1]);
    else
        puts(s);
        printf("\n");
    }


}
