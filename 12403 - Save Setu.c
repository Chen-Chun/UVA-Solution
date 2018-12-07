#include<stdio.h>
int main()
{
    int T,i,amount,sum=0,k;
    char donate[1],report[1],ara[6];
    donate[0]='d';
    report[0]='r';
    scanf("%d",&T);
    for(i=0;i<T;i++){
          getchar();
        for(k=0;k<6;k++){
            scanf("%c",&ara[k]);
        }
          if(ara[0]==donate[0]){
            scanf("%d",&amount);
            sum=sum+amount;
            }
        else if(ara[0]==report[0]){
                printf("%d\n",sum);
            }
    }

    return 0;
}
