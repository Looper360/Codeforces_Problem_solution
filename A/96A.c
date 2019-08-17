/**
    if 7 '1' or 7 '0' are side by side then yes its dangerous
    input
        001001
    output
            NO
    input
        1000000001
    output
        YES

**/

#include<stdio.h>
#include<string.h>
int main()
{
    int j=0, k=0, ln,i ;
    char s[100] ;
    gets(s) ;
    ln = strlen(s) ;
    for(i=0;i<ln;i++)
    {
        if( s[i]=='0' )
        {
            j++ ;
            k=0;
        }
        else if( s[i]=='1' )
        {
            k++ ;
            j=0;
        }
        if( j==7 || k==7 )
        {
            printf("YES") ;
            return 0;
        }
    }
    printf("NO") ;
    return 0 ;
}
