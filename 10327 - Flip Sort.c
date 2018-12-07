#include<stdio.h>
int main()
{
    int N,count,a[1000],min,m,s,i,temp,n,j;
    while(scanf("%d",&N)!=EOF)
    {
        count=0;
        for(s=0;s<N;s++)
        {
            scanf("%d",&a[s]);
        }
         for(i=0;i<N;i++)
    {
        min=a[i];
        for(j=i;j<N;j++)
        {
            if(a[j]<=min)
            {
                min=a[j];
                n=j;
                count++;
            }
        }
        temp=a[i];
        a[i]=min;
        a[n]=temp;
    }

        printf("Minimum exchange operations : %d\n",count);
    }
    return 0;
}
