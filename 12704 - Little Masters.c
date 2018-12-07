#include<stdio.h>
#include<math.h>
int main()
{
    int i,T,x,y,r;
    double shortest,longest,otivuj;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
       scanf("%d %d %d",&x,&y,&r);
       if(x==0 || y==0)
       {
           if(x==0)
           {
               longest=r+y;
               shortest=r-y;
           }
           else
           {
               longest=r+x;
               shortest=r-x;
           }
       }
       else
       {
           otivuj=sqrt(x*x+y*y);
           longest=r+otivuj;
           shortest=r-otivuj;
       }
       printf("%.2lf %.2lf\n",shortest,longest);
    }
    return 0;
}
