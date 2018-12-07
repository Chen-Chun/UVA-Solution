#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,num,sum,sum_2,res,rem,res1;
    char ara[20],ara1[20];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        k=0;
       gets(ara);
       for(j=0;j<19;j++)
       {
           if(ara[j]!=' ')
            {
                ara1[k]=ara[j];
                k++;
            }
       }
       sum=0;
       for(j=0;j<k;j++)
       {
           if(j%2==0)
           {
               ara1[j]=(ara1[j]-'0')*2;
           }
           else
            sum=sum+(ara1[j]-'0');
       }
       sum_2=0;

       for(j=0;j<k;j++)
       {
           if(j%2==0)
           {
               while(ara1[j]>0)
               {
                   res=ara1[j]/10;
                   rem=ara1[j]%10;
                   ara1[j]=res;
                   sum_2=sum_2+rem;
               }
           }
       }
       res1=sum+sum_2;
       if(res1%10==0)
        printf("Valid\n");
       else
        printf("Invalid\n");
    }
    return 0;
}
