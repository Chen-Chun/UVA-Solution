#include<stdio.h>
#include<math.h>

int main()
{
    int t,i;
    long long n,j,res,rem,a_in,x;
    double p;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        {
            scanf("%lld",&n);

            p=sqrt(n);
            printf("Case %d:",i+1);
            for(j=p;j>0;j--)
            {
                x=n-j*j;
                if(x%j==0 && x>=j)
                    printf(" %lld",x);

            }
            printf("\n");

        }
    return 0;
}
