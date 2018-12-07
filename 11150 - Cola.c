#include<stdio.h>
int main()
{
    int N,n,sum,res,rem;
    while(scanf("%d",&n)!=EOF)
    {
        N=n;
        if(N==0)
            break;
            sum=0;
        while(N>0)
        {
            res=N/3;
            rem=N%3;

            if(res!=0)
            {
                N=res+rem;
            }
            else
                N=res;
            sum=sum+res;

        }
        if(rem+res==2)
            sum=sum+1;
        printf("%d\n",sum+n);
    }

    return 0;
}

