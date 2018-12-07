#include<stdio.h>
int main()
{
    int N,flag,j,k;
    long long M,i,l,sum,book_price[10000],min,sub;
    while(scanf("%d",&N)!=EOF)
    {
        flag=0;
        for(j=0;j<N;j++)
        {
            scanf("%lld",&book_price[j]);
        }
        scanf("%lld",&M);
        for(k=0;k<N;k++)
        {
         for(j=0;j<N;j++)
        {
            sum=book_price[k]+book_price[j];
            if(sum==M && k!=j)
            {
                if(book_price[k]<book_price[j])
                   {
                     sub=book_price[j]-book_price[k];
                     if(flag==0)
                     {
                         min=sub;
                         flag=1;
                     }
                   }
                else
                   {
                     sub=book_price[k]-book_price[j];
                     if(flag==0)
                     {
                         min=sub;
                         flag=1;
                     }
                   }
                   if(sub<=min){
                    min=sub;
                    if(book_price[k]<book_price[j])
                        {
                            i=book_price[k];
                            l=book_price[j];
                        }
                    else
                    {
                        {
                            i=book_price[j];
                            l=book_price[k];
                        }

                    }

                   }
            }

        }

        }
           printf("Peter should buy books whose prices are %lld and %lld.\n",i,l);
           printf("\n");
            }

    return 0;
}
