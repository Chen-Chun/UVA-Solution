#include<stdio.h>
int main()
{
    int c,N,T,i,j,ara[100],cp;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&N);
        c=0;
        for(j=0;j<N;j++){
            scanf("%d",&ara[j]);
            c++;
        }
        if(c%2!=0){
            cp=ara[(c-1)/2];
            printf("Case %d: %d\n",i,cp);
        }
        else if(c%2==0){
            cp=ara[c/2];
            printf("Case %d: %d\n",i,cp);
        }
    }
    return 0;
}
