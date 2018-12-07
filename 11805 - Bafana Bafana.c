#include<stdio.h>
int main()
{
    int i,T,K,N,P,player_num,j;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d %d %d",&N,&K,&P);
        for(j=0;j<P;j++){
            player_num=K;
            K++;
            if(K>N){
                K=1;
            }
        }
        printf("Case %d: %d\n",i+1,K);
    }
    return 0;
}
