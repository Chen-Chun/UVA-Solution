#include<stdio.h>
int main()
{
    int week_ara[1000],i,people,hotel,week,price,j,flag,m,ful;
    long taka,total,min;
    while(scanf("%d %ld %d %d",&people,&taka,&hotel,&week)!=EOF)
    {
        total=0;
        flag=0;
        for(i=0;i<hotel;i++)
        {
            scanf("%d",&price);
            for(j=0;j<week;j++)
            {
                scanf("%d",&week_ara[j]);
            }
            if((price*people)>taka)
                continue;


     ful=0;

        for(m=0;m<week;m++)
        {
            if(week_ara[m]>=people)
            {
                if(flag==0)
                {
                    flag=1;
                    min=people*price;
                }
              ful=1;

                break;
            }
        }


           if(ful==0)
                continue;
           else

          total=people*price;
                if(total<=min)
                    min=total;

    }
    if(total==0)
        printf("stay home\n");
    else
        printf("%ld\n",min);

    }
    return 0;
}
