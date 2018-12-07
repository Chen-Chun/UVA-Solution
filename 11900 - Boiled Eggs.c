#include<stdio.h>
int main()
{
    int T,n,P,Q,q[30],i,j,m,count,sum;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
            count=0;
            sum=0;
        scanf("%d %d %d",&n,&P,&Q);
        for(j=0;j<n;j++){
            scanf("%d",&q[j]);
        }
        for(m=1;m<=n;m++){
            sum=sum+q[m-1];

            if(sum>Q || m>P)
                break;
            else
                count++;
        }
    printf("Case %d: %d\n",i,count);
    }
    return 0;
}
