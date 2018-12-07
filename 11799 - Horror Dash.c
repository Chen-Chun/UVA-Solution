#include<stdio.h>
int main()
{
    int T,N,c,s,max,j;
    scanf("%d",&T);
    for(c=0;c<T;c++)
    {
        scanf("%d",&N);
        max=0;
        for(j=0;j<N;j++)
        {
            scanf("%d",&s);
            if(s>max)
                max=s;
        }
        printf("Case %d: %d\n",c+1,max);
    }
    return 0;
}
