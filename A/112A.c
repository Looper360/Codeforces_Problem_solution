#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100] ;
    int n;

    gets(a) ;
    gets(b) ;

    n = stricmp(a,b) ;
    printf("%d",n) ;

}
