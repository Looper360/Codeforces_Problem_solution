#include<stdio.h>
#include<math.h>
int main()
{
    int Team, i=0, c4=0, c3=0, c2=0, c1=0, on=0, sum ;
    scanf("%d",&Team) ;
    int a[Team] ;
    while(i<Team)
    {
        scanf("%d%*c",&a[i]) ;
        i++ ;
    }
    for(i=0;i<Team;i++)
    {
        if( a[i]==4 ) c4++ ;        //c4 denotes the number of group w that consists of 4 member
        else if( a[i]==3 ) c3++ ;    //c3 denotes the number of group w that consists of 3 member
        else if( a[i]==2 ) c2++ ;        //c2 denotes the number of group w that consists of 2 member
        else if( a[i]==1 ) c1++ ;        //c1 denotes the number of group w that consists of 1 member

    }
    if( c3!=0 && c1!=0 )
    {
        if(c3<=c1) c1 = c1 - c3 ;
        else c1 = 0 ;
    }
    if( c2%2!=0)
    {
        c2-- ;
        c1 = c1 + 2 ;
    }
    if( c1%4!=0 )
    {
        on = 1 + (int) c1/4 ;
    }
    else
        on = c1/4 ;

        sum = c4 + c3 + c2/2 + on ;
    printf("%d",sum) ;
    return 0 ;
}
