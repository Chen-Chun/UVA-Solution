#include<stdio.h>
int main()
{
    int C,N,i,count,j,ara[1000];
    double res,avr,sum;
    char ch;
    ch='%';
    scanf("%d",&C);
    for(i=0;i<C;i++){
        scanf("%d",&N);
        sum=0.0;
        count=0;
        for(j=0;j<N;j++){
            scanf("%d",&ara[j]);
            sum=sum+ara[j];
        }
        avr=sum/N;
        for(j=0;j<N;j++)
        {
            if(ara[j]>avr){
                count++;
            }
        }
        res=(count*100.00)/N;
        printf("%.3lf%c\n",res,ch);

    }

    return 0;
}
