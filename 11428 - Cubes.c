#include<stdio.h>
int main()
{
    int x,y,n,ans,flag,i,s,k,m;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
            flag=0;
            m=1;
        for(i=1;i<n/2;i++)
        {
            if(i*i*i>n)
            {
            s=i;
            printf("%d ",s);

            break;
            }
        }

           for(k=1;k<s;k++)
               {
                   ans=s*s*s-k*k*k;
                   if(ans==n)
            {
                printf("%d %d\n",i,k);
                flag=1;
                break;
            }
               }


        if(flag==0)
            printf("No solution\n");
    }

    return 0;
}
