#include<stdio.h>
int main()
{
    int n,i;
    long sum,res;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
            sum=0;
        for(i=n-1;i>=1;i--)
            sum=(i*i)+sum;
            res=sum+n*n;
            printf("%ld\n",res);

    }

    return 0;
}
