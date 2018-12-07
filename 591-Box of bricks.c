#include<stdio.h>
int main()
{
    int n,ara[100],sum,min,av,i,t=1;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        sum=0;
        min=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&ara[i]);
            sum=sum+ara[i];
        }
        av=sum/n;
        for(i=0;i<n;i++)
        {
            if(ara[i]<av)
            {
                min=min+(av-ara[i]);
            }
        }
            printf("Set #%d\nThe minimum number of moves is %d.\n",t,min);
            printf("\n");
            t++;
    }

    return 0;
}
