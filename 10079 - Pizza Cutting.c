#include<stdio.h>
int main()
{
    long long i,N,sum;
    while(scanf("%lld",&N)!=EOF)
    {
        if(N<0)
            break;
            sum=1;
        for(i=1;i<=N;i++)
        {
            sum=sum+i;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
