///Helpful maths

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100], tem ;
    gets(s) ;
    int ln, j, k ;
    ln = strlen(s) ;
    for(j=0; j<ln; j=j+2)
    {
        for(k=j+2; k<ln; k=k+2)
        {
            if( s[j]>s[k] )
            {
                tem = s[j] ;
                s[j] = s[k] ;
                s[k] = tem ;
            }
        }
    }
    puts(s) ;
    return 0 ;
}
