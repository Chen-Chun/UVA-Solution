#include<stdio.h>
int main()
{
    int n,sum,res,rem;
    while(scanf("%d",&n)!=EOF)
    {

        if(n==0)
            break;
            sum=0;
        while(n>0)
        {
            res=n/3;
            rem=n%3;

            if(res!=0)
            {
                n=res+rem;
            }
            else
                n=res;
            sum=sum+res;

        }
        if(rem+res==2)
            sum=sum+1;
        printf("%d\n",sum);
    }

    return 0;
}
