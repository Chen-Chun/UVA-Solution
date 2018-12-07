#include<stdio.h>
int GCD(int x,int y);
int main()
{
    int N,j,i;
    long G;
    while(scanf("%d",&N)!=EOF)
    {
        if(N==0)
            break;
        G=0;
    for(i=1;i<N;i++)
    for(j=i+1;j<=N;j++)
     {
     G+=GCD(i,j);
     }
     printf("%ld\n",G);
    }

    return 0;
}

int GCD(int x,int y)
{
    int temp,gcd;
    if(x==0)
        gcd=y;
    else if(y==0)
        gcd=x;
    else
    {
      while(y!=0)
      {
          temp=y;
          y=x%y;
          x=temp;
      }
      gcd=x;
    }
    return gcd;
}






