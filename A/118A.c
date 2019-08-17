#include<stdio.h>
#include<string.h>


int main()
{
    int i;
    char s[100];

    gets(s);

    strlwr(s);
    for(i=0;s[i]!='\0';)
    {

        if(!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'))
        {
            printf(".%c",s[i]);
        }
        i++;
    }

}
