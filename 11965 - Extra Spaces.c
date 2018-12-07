#include<stdio.h>
int main()
{
    int t,n,i,flag,k,m,j;
    char ara[500],ara1[500];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        getchar();
        printf("Case %d:\n",i+1);
        for(j=0;j<n;j++)
        {
            flag=0;
            m=0;
            gets(ara);
            for(k=0;ara[k]!='\0';k++)
            {
               if(ara[k]==' ')
               {

                  if(flag==0)
                  {
                      ara1[m]=ara[k];
                     flag=1;
                     m++;
                  }
               }
               else
               {

                   ara1[m]=ara[k];
                   flag=0;
                   m++;
               }
            }
           for(k=0;k<m;k++)
           {
               printf("%c",ara1[k]);
           }
           printf("\n");
        }
        if(i!=t-1)
        printf("\n");
    }
    return 0;
}
