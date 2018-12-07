#include<stdio.h>
int main()
{
    int N,l,c,t=1;
    while(scanf("%d",&N)!=EOF)
    {
        if(N<0)
            break;
        l=1;
        c=0;
        while(l<N)
        {
            l=l*2;
            c++;
        }
            printf("Case %d: %d\n",t,c);
            t++;
    }

    return 0;
}
