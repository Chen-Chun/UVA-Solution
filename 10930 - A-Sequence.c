#include<stdio.h>
int main()
{
    int t,ara[50],flag,i,sum,j,l,k=0;
    while(scanf("%d",&t)!=EOF)
    {
        flag=0;

        for(i=0;i<t;i++)
        {
            scanf("%d",&ara[i]);
        }
        for(i=0;i<t;i++)
        {
            if(ara[i]>ara[i+1])
            {
                flag=1;
                 break;
            }

            else
            {
                for(j=0;j<i;j++)
                {
                    sum=0;
                    for(l=j+1;l<i;l++)
                    {
                        sum=sum+ara[j]+ara[l];
                        if(sum==ara[i])
                        {
                            flag=1;
                             break;
                        }

                    }
                    if(flag==1)
                        break;
                }
            }
        }

        if(flag==1)
        {
            printf("Case #%d:",k+1);
            for(i=0;i<t;i++)
                printf(" %d",ara[i]);
            printf("\nThis is not an A-sequence.\n");

        }

        else if(flag==0)
             {
             printf("Case #%d:",k+1);
            for(i=0;i<t;i++)
                printf(" %d",ara[i]);
            printf("\nThis is an A-sequence.\n");
             }
             k++;


    }
    return 0;
}
