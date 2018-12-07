#include<stdio.h>
int main()
{
    int T,N,i,height,j,first,high,low;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        scanf("%d",&height);
        high=0;
        low=0;
        first=height;
        for(j=1;j<N;j++)
        {
            scanf("%d",&height);
            if(height>first)
                high++;
            else if(height<first)
                low++;
                first=height;

        }
        printf("Case %d: %d %d\n",i+1,high,low);
    }
    return 0;
}
