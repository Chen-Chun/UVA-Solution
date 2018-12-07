#include<stdio.h>
int main()
{
    int i,j,T,a,f,row,col,n,flag;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&a);
        scanf("%d",&f);
        for(j=1;j<=f;j++)
        {
            flag=0;
            n=0;
            for(row=0;row<(2*a)-1;row++)
            {
                if(flag==0)
                {
                 if(n<a)
                    n++;

                }

                for(col=1;col<=n;col++)
                {
                    printf("%d",n);


                }
                printf("\n");
                if(n==a)
                    flag=1;
                if(flag==1)
                    n--;
            }
               if(j==f)
               {
                   if(i!=T)
             printf("\n");
               }
               else
                printf("\n");
                    }

    }

    return 0;
}
