#include<stdio.h>
int main()
{
    int i,j,t,rem;
    long n,ans,res;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n);
        ans=(((((n*567)/9)+7492)*235)/47)-498;
        for(j=0;j<2;j++)
        {
            res=ans/10;
            rem=ans%10;
            ans=res;
        }
        if(rem<0)
            rem=-1*rem;
        printf("%d\n",rem);
    }

    return 0;
}
