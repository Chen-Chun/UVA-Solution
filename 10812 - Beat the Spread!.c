#include<stdio.h>
int main()
{
    int i,n;
    long long int s,d,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&s,&d);
        if(s<d)
            {
                printf("impossible\n");
            }
        else
        {
            a=(s+d);
            b=(s-d);
            if(a%2==0 && b%2==0)
            {
                a=a/2;
                b=b/2;
                if(a>b)
                printf("%lld %lld\n",a,b);
            else
                printf("%lld %lld\n",b,a);

            }
            else
                printf("impossible\n");

        }

    }

    return 0;
}
