#include<stdio.h>
int main()
{
    int n,k,m,sum,res,c,rem;
    while(scanf("%d %d",&n,&k)!=EOF){
        sum=0;
        m=n;
        while(m>0) {
         res=m/k;
         if(m%k!=0 && m/k!=0){
            rem=m%k;
            m=res+rem;
         }

         else {
                m=res;
         }
        sum=sum+res;

        }
        c=sum+n;
        printf("%d\n",c);
    }
    return 0;
}
