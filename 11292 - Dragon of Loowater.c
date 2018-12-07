#include<stdio.h>
long n_l[20000],m_l[20000],ara[20000];
int main()
{
    int n,m,k,flag,i,j;
    long c,min;
    long long sum;

    while(scanf("%d %d",&n,&m)!=EOF)
    {
        if(n==0 && m==0)
            break;
        for(i=0;i<n;i++)
        {
            scanf("%ld",&n_l[i]);
        }
        for(j=0;j<m;j++)
        {
            scanf("%ld",&m_l[j]);
        }
        if(m<n)

            {
                printf("Loowater is doomed!\n");

            }
        else
        {
            sum=0;
            for(i=0;i<n;i++)
            {
                c=0;
                flag=0;
                for(j=0;j<m;j++)
                {
                    if(n_l[i]==m_l[j])
                        {
                            sum=sum+m_l[j];
                            flag=1;
                            break;
                        }

                        else if(m_l[j]>n_l[i])
                        {
                            flag=2;
                            ara[c]=m_l[j];
                            c++;
                        }
                }
                if(flag==0)
                {
                    printf("Loowater is doomed!\n");
                    break;
                }

                else if(flag==2)
                {
                      min=ara[0];
                    for(k=1;k<c;k++)
                    {
                        if(ara[k]<min)
                            min=ara[k];
                    }
                    sum=sum+min;

                }
            }
            if(flag!=0)
            printf("%lld\n",sum);
        }


    }
    return 0;
}
