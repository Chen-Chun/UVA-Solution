#include<stdio.h>
int main()
{
    int T,i,L,l,j,k,temp,ara[50],count,flag;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        count=0;
        flag=0;
        scanf("%d",&L);
        for(l=0;l<L;l++)
        {
            scanf("%d",&ara[l]);
        }
        for(j=0;j<L-1;j++)
        {
            for(k=0;k<L-1;k++)
            {
                if(ara[k]>ara[k+1])
                {
                    temp=ara[k];
                    ara[k]=ara[k+1];
                    ara[k+1]=temp;
                    count++;
                    flag=1;
                }
            }
            if(flag==0)
                break;
                flag=0;
        }
        printf("Optimal train swapping takes %d swaps.\n",count);
    }

    return 0;
}
