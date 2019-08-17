
#include<stdio.h>
#include<math.h>

int main(void)
{
 int i,j,k,c=0,n;

 scanf("%d",&n);

 for(i=1;i<=n;i++)
  for(j=i+1;j<=n;j++)
   {
       k=sqrt(i*i+j*j);
      if(i*i+j*j==k*k && k<=n)
        {
         c++;
         //printf("%d. %d %d %d\n",c,i,j,k);

        }
   }

    printf("%d\n",c);

  return 0;
}

