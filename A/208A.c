#include<stdio.h>
#include<string.h>

int main()
{
    char s[200];
    int ln,i;

    gets(s);
    ln=strlen(s);

    for(i=0;i<ln;i++)
    {
    if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
    {
        printf(" ");
        i=i+2;
    }
    else
        printf("%c",s[i]);
 }


}
