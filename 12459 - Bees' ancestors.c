#include<stdio.h>
int main()
{
    long long sum,M,F,temp;
    int i,n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
            M=0;
            F=1;
        for(i=1;i<=n;i++)
        {
            temp=M;
            M=M+F;
            F=temp;

        }
        sum=M+F;
        printf("%lld\n",sum);
    }
    return 0;
}
