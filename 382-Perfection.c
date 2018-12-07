#include<stdio.h>
int main()
{
    long int i,n,sum;
    int flag=0;

    while(scanf("%ld",&n)!=EOF)
    {
        if(n==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        if(flag==0)
        {
              printf("PERFECTION OUTPUT\n");
              flag=1;
        }

           sum=0;
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
            {
                sum=sum+i;
           }
        }
        if(n<10)

            printf("    ");

        else if(n<100)
            printf("   ");
        else if(n<1000)
            printf("  ");
        else if(n<10000)
            printf(" ");
        if(sum==n)
            printf("%ld  PERFECT\n",n);
        else if(sum>n)
            printf("%ld  ABUNDANT\n",n);
        else if(sum<n)
            printf("%ld  DEFICIENT\n",n);

    }


    return 0;
}
