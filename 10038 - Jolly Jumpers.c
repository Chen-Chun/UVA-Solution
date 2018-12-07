#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,flag,num,ara[3000],min[3000],test[3000],j;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&ara[i]);
        }
        for(i=0;i<n-1;i++)
        {
            min[i]=abs(ara[i]-ara[i+1]);

        }
        num=1;
        for(i=0;i<n-1;i++)
        {
            test[i]=num;

            num++;
        }
        flag=0;
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(test[i]==min[j])
                    {
                       flag=1;
                    }

            }
            if(flag==1)
                flag=0;
            else
            {
                flag=2;
                break;
            }
        }
        if(flag==2)
            printf("Not jolly\n");
        else
            printf("Jolly\n");
    }
    return 0;
}
