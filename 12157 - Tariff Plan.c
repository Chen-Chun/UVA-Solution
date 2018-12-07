#include<stdio.h>
int main()
{
    int n,res1,res2,mile,juice,n1,n2,T,N,i,j;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        mile=0;
        juice=0;
        for(j=0;j<N;j++)
        {
            scanf("%d",&n);
            n1=n;
            n2=n;
            res1=n1/30;
            mile=((res1+1)*10)+mile;

            res2=n2/60;
            juice=((res2+1)*15)+juice;

        }
        if(mile<juice)
            printf("Case %d: Mile %d\n",i+1,mile);
        else if(juice<mile)
            printf("Case %d: Juice %d\n",i+1,juice);
        else
            printf("Case %d: Mile Juice %d\n",i+1,mile);
    }

    return 0;
}

