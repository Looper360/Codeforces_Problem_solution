#include<stdio.h>
#include<string.h>

int main()
{
    char s[200],t[200];

    gets(s);
    gets(t);

    if(strcmp(strrev(s),t)==0)
        printf("YES\n");
    else
        printf("NO\n");


}
