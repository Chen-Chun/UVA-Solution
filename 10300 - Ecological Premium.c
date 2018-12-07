#include<stdio.h>
int main()
{
    int n,f,i,j;
   long long int sum,res;
    long int s,fr,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            sum=0;
        scanf("%d",&f);
        for(j=1;j<=f;j++){
            scanf("%ld %ld %ld",&s,&a,&fr);
            res=(s*fr);
            sum=sum+res;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
