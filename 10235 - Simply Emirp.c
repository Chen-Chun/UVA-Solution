#include<stdio.h>
int main()
{
    long N,i;
    while(scanf("%ld",&N)!=EOF)
    {
        flag=0;
        for(i=2;i<=N/2;i++)
        {
            if(N%i==0)

            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            printf("%ld is not prime.\n",N);
        else
        {

        }
    }
    return 0;
}
